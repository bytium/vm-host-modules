MODULES = vmmon vmnet
SUBDIRS = $(MODULES:%=%-only)
TARBALLS = $(MODULES:%=%.tar)
MODFILES = $(foreach mod,$(MODULES),$(mod)-only/$(mod).ko)
VM_UNAME = $(shell uname -r)
MODDIR = /lib/modules/$(VM_UNAME)/misc
VMWARE_SOURCE = /usr/lib/vmware/modules/source
MODINFO = /sbin/modinfo
DEPMOD = /sbin/depmod

%.tar: FORCE
	git archive -o $@ --format=tar HEAD $(@:.tar=-only)

.PHONY: FORCE subdirs $(SUBDIRS) clean tarballs install vmware-rebuild

# Build the modules
all: subdirs tarballs

subdirs: $(SUBDIRS)

FORCE:

$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

# Check module versions before installing
versioncheck: $(MODFILES)
	@for f in $(MODFILES); do \
	    mver=$$($(MODINFO) -F vermagic $$f);\
	    mver=$${mver%% *};\
	    test "$${mver}" = "$(VM_UNAME)" \
	        || ( echo "Version mismatch: module $$f $${mver}, kernel $(VM_UNAME)" ; exit 1 );\
	done

# Copy the tarballs to /usr/lib/vmware/modules/source/
copy-tarballs:
	@echo "Copying tarballs to $(VMWARE_SOURCE)..."
	sudo cp $(TARBALLS) $(VMWARE_SOURCE)

# Install the compiled modules and update dependencies
install: versioncheck copy-tarballs vmware-rebuild
	install -D -t $(MODDIR) $(MODFILES)
	strip --strip-debug $(MODULES:%=$(MODDIR)/%.ko)
	if test -z "$(DESTDIR)"; then $(DEPMOD) -a $(VM_UNAME); fi

# Rebuild VMware modules using vmware-modconfig
vmware-rebuild:
	@echo "Rebuilding VMware modules..."
	sudo vmware-modconfig --console --install-all

clean: $(SUBDIRS)
	rm -f *.o

tarballs: $(TARBALLS)

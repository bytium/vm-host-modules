**Original REPO:**

https://github.com/mkubecek/vmware-host-modules/tree/workstation-17.5.1

**Description:**

Vmware Workstation Pro host modules patch.

Modified the original code to make it work with vmware workstation 17.6 as we needed immediate fix since the current patch was not working for us.

**Tested on:**

- Vmware Workstation version 17.6
- Debian Testing

**Kernel Version:**
- 6.10.6-amd64

**INSTALLATION:**
```bash

git clone https://github.com/bytium/vm-host-modules.git
cd vm-host-modules
git checkout 17.6

make
sudo make install
```


Big Thanks to original developer: https://github.com/mkubecek 






**Jobyer Ahmed**\
**Bytium** - https://bytium.com

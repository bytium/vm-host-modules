## Description

This repository provides a patch for VMware Workstation host modules (`vmmon` and `vmnet`) to ensure compatibility with newer Linux kernels on Debian and Ubuntu distributions. It includes automated scripts to build and install the patched modules for seamless integration with your VMware Workstation installation.

The [original code](https://github.com/mkubecek/vmware-host-modules) was modified to provide immediate fixes for VMware Workstation versions 17.5.2 and 17.6, as the existing patches were not functional for our setup.

## Tested on

- VMware Workstation Pro: Version 17.5.2, 17.6
- Linux Kernels: Up to version 6.10.x
- Distributions: Debian-based systems (Debian, Ubuntu, etc.) and Fedora

## Installation
```bash

git clone --depth 1 --branch 17.6 https://github.com/bytium/vm-host-modules.git
cd vm-host-modules
make
sudo make install
```

What will it do?

- Install the compiled `vmmon.ko` and `vmnet.ko` modules to `/lib/modules/$(uname -r)/misc/`.
- Copy the generated `vmmon.tar` and `vmnet.tar` files to `/usr/lib/vmware/modules/source/`.
- Run `vmware-modconfig --console --install-all` to update VMware with the new modules.


## Additional Info
Original Repo: https://github.com/mkubecek/vmware-host-modules/tree/workstation-17.5.1

Thanks: https://github.com/mkubecek 

For detailed instruction(share this link if you want to help others with full instruction): https://bytium.com/vmware-workstation-host-module-patch-for-debian-and-ubuntu/



## By Jobyer Ahmed
Bytium - https://bytium.com

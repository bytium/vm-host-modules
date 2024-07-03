Original link: https://github.com/mkubecek/vmware-host-modules/tree/workstation-17.5.1

Modified the original version to work with vmware workstation 17.5.2 since there was no update from the original author.

Test on:

- Vmware version 17.5.2
- Tested Kernel 6.9.7-amd64

INSTALATION:
```bash

git clone git@github.com:yourusername/vm-host-modules.git
cd vm-host-modules
git checkout 17.5.2

make
sudo make install
sudo modprobe vmmon
sudo modprobe vmnet
```




Modified by: Bytium - https://bytium.com

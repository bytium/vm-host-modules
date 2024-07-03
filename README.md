**Original REPO:**

https://github.com/mkubecek/vmware-host-modules/tree/workstation-17.5.1

**Description:**

Modified the original code to make it work with vmware workstation 17.5.2 as we needed immediate fix since the current patch was not working for us.

**Test on:**

- Vmware version 17.5.2
- Tested Kernel 6.9.7-amd64

**INSTALATION:**
```bash

git clone git@github.com:yourusername/vm-host-modules.git
cd vm-host-modules
git checkout 17.5.2

make
sudo make install
sudo modprobe vmmon
sudo modprobe vmnet
```




**Bytium** - https://bytium.com

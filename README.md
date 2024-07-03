**Original REPO:**

https://github.com/mkubecek/vmware-host-modules/tree/workstation-17.5.1

**Description:**

Vmware Workstation Pro host modules patch.

Modified the original code to make it work with vmware workstation 17.5.2 as we needed immediate fix since the current patch was not working for us.

**Tested on:**

- Vmware Workstation version 17.5.2
- Kernel 6.9.7-amd64

**INSTALLATION:**
```bash

git clone git@github.com:yourusername/vm-host-modules.git
cd vm-host-modules
git checkout 17.5.2

make
sudo make install
sudo modprobe vmmon
sudo modprobe vmnet
```


Big Thanks to original developer: https://github.com/mkubecek \




Modified by: **Jobyer Ahmed**
**Bytium** - https://bytium.com

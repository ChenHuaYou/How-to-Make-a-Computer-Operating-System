#!/bin/bash
qemu-img create c.img 2M
fdisk ./c.img  << EOF
x
c
4
h
16
s
63
r
n
p
1
1
4
a
1
w
EOF
fdisk -l -u ./c.img
DEVICE=`losetup -f`
losetup -o 32256 $DEVICE ./c.img

mke2fs $DEVICE
mount  $DEVICE /mnt/
cp -R bootdisk/* /mnt/
umount /mnt/
grub-mkdevicemap --device-map=/dev/null << EOF
device (hd0) ./c.img
geometry (hd0) 4 16 63
root (hd0,0)
setup (hd0)
quit
EOF

losetup -d $DEVICE

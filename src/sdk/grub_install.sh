qemu-img create c.img 20M
DEVICE=`losetup -f`
losetup $DEVICE ./c.img
mke2fs $DEVICE
mount  $DEVICE /mnt/
cp -R bootdisk/* /mnt/
grub-install --boot-directory=/mnt/boot --force --allow-floppy $DEVICE
umount /mnt/
losetup -d $DEVICE


echo "(hd0) /dev/loop11" > device.map
grub-install --no-floppy                                                      \
              --grub-mkdevicemap=device.map                          \
              --modules="biosdisk part_msdos ext2 configfile normal multiboot" \
              --root-directory=/mnt/ \
              /dev/loop11

my firt time with git, and with boot loader create!

read more http://www.codeproject.com/Articles/664165/Writing-a-boot-loader-in-Assembly-and-C-Part

how to compile:
gcc -c -g -Os -march=i686 -ffreestanding -Wall -Werror test.c -o test.o
ld -static -Ttest.ld -nostdlib --nmagic -o test.elf test.o
objcopy -O binary test.elf test.bin 
qemu test.bin

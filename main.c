asm(".code16\n");
asm("jmpl $0x0000, $main\n");

void main(){

	__asm__ __volatile__ ("movb $'G' ,%al\n");
	__asm__ __volatile__ ("movb $0x0e, %ah\n");
	__asm__ __volatile__ ("int $0x10\n");

	__asm__ __volatile__ ("movb $'i', %al\n");
	__asm__ __volatile__ ("movb $0x0e, %ah\n");
	__asm__ __volatile__ ("int $0x10\n");
}

#include <stdio.h>

int
main(void) {
	unsigned char sc[] = "\x31\xc0\x40\x90\xc3";
	(*(void(*)())sc)();

	register int rax asm("rax");
	if (rax) {
		printf("32 bit system\n");
	} else {
		printf("64 bit system\n");
	}
}

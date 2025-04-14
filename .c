#include<stdio.h>

void main()
{
	printf("기본 4-8\n");
	printf("10 & 7 = %d\n", 10 & 7);
	printf("10 & 7 = %#x\n", 10 & 7);
	printf("123 & 456 = %d\n", 123 & 456);
	printf("123 & 456 = %#x\n", 123 & 456);
	printf("0xFFFF&0000 = %d\n", 0xFFFF & 0000);
	printf("0xFFFF&0000 = %#x\n", 0xFFFF & 0000);
	printf("\n");

	printf("기본 4-9\n");
	printf("10 | 7 = %d\n", 10 | 7);
	printf("10 | 7 = %#x\n", 10 | 7);
	printf("123 | 456 = %d\n", 123 | 456);
	printf("123 | 456 = %#x\n", 123 | 456);
	printf("0xFFFF| 0000 = %d\n", 0xFFFF | 0000);
	printf("0xFFFF| 0000 = %#x\n", 0xFFFF | 0000);
	printf("\n");

	printf("기본 4-10\n");
	printf("10 ^ 7 = %d\n", 10 ^ 7);
	printf("10 ^ 7 = %#x\n", 10 ^ 7);
	printf("123 ^ 456 = %d\n", 123 ^ 456);
	printf("123 ^ 456 = %#x\n", 123 ^ 456);
	printf("0xFFFF^0000 = %d\n", 0xFFFF ^ 0000);
	printf("0xFFFF^0000 = %#x\n", 0xFFFF ^ 0000);
	printf("\n");

	printf("응용 4-11\n");
	char a = 'A', b, c;
	char mask = 0x0F;
	printf("%X, %X =%X\n", a, mask, a & mask);
	printf("%X, %X =%X\n", a, mask, a | mask);

	mask = 'a' - 'A';

	b = 'A' ^ 32;
	printf("%c ^ %d = %c\n", a, mask, b);

	a = a ^ 32;
	printf("% c ^ %d = %c\n", b, mask, a);

}
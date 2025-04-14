#include<stdio.h>

void main() 
{
	printf("int 형의 크기 \t\t\t ==> %d\n", sizeof(int));

	printf("unsigned int 형의 크기 \t\t ==> %d\n", sizeof(unsigned int));

	printf("short형의 크기 \t\t\t ==> %d\n", sizeof(short));

	printf("unsigned short 형의 크기\t ==> %d\n", sizeof(unsigned short));

	printf("long int 형의 크기 \t\t ==> %d\n", sizeof(long int));

	printf("unsigned long int 형의 크기\t ==> %d\n", sizeof(unsigned long int));

	printf("float형의 크기 \t\t\t ==> %d\n", sizeof(float));

	printf("double 형의 크기 \t\t ==> %d\n", sizeof(float));

	printf("long double 형의 크기 \t\t ==> %d\n", sizeof(long double));

	printf("char 형의 크기 \t\t\t ==> %d\n", sizeof(char));

	printf("unsigned chat 형의 크기 \t ==> %d\n", sizeof(unsigned char));
	//출력 창의 정렬을 위해 예제와 달리 \t 하나 제거

}
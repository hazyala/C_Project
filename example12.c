#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	char ch;

	printf("첫 번째 수를 입력하세요. :");
	scanf("%d", &a);

	printf("계산할 연산자를 입력하세요. : ");
	scanf(" %c", &ch); // %c문자열 입력시 띄어쓰기 주의하기

	printf("두 번째 수를 입력하세요.:");
	scanf("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다.\n", a, b, a + b);

	else if (ch == '-')
		printf("%d - %d = %d 입니다.\n", a, b, a - b);

	else if (ch == '*')
		printf("%d * %d = %d 입니다.\n", a, b, a * b);

	else if (ch == '/')
		printf("%d / %d = %f 입니다.\n", a, b, a / (float)b);

	else if (ch == '%')
		printf("%d %% %d = %f 입니다.\n", a, b, a % b);
	
	else
		printf("연산자를 잘못 입력했습니다. \n"); //ch로 지정한 연산자 외 입력시 출력

}
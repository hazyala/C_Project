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
	// getchar(); %c 띄어쓰기 오류로 getchar를 사용하여 문제를 해결하려 하였으나 실패

	printf("두 번째 수를 입력하세요.:");
	scanf("%d", &b);

	if (ch == '+')
		printf("%d + %d = %d 입니다.\n", a, b, a + b);

	if (ch == '-')
		printf("%d - %d = %d 입니다.\n", a, b, a - b);

	if (ch == '*')
		printf("%d * %d = %d 입니다.\n", a, b, a * b);

	if (ch == '/')
		printf("%d / %d = %f 입니다.\n", a, b, a / (float)b);

	if (ch == '%')
		printf("%d %% %d = %f 입니다.\n", a, b, a % b);

}
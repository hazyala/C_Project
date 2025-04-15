#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	char ch;

	printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &ch, &b);
	//사용자 입력을 받아 a, ch, b에 저장하고 띄어쓰기를 기준으로 구분하여 정수?문자?정수 순서로 처리

	switch (ch) //ch에 따라 해당 case로 이동
	{
	case '+':
		printf("%d + %d = %d 입니다. \n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d 입니다. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d 입니다. \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d 입니다. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d 입니다. \n", a, b, a % b);
		break;
	default://case에 해당하지 않는 무엇을 입력하면 경고를 출력
		printf("연산자를 잘못 입력했습니다. \n");
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()

{
	int a, b, c, d;
	printf("첫 번째 값을 입력하세요 : ");
	scanf("%d", &a);

	printf("두 번째 값을 입력하세요 : ");
	scanf("%d", &b);

	printf("세 번째 값을 입력하세요 : ");
	scanf("%d", &c);

	printf("네 번째 값을 입력하세요 : ");
	scanf("%d", &d);


	int result = a + b + c + d;
	printf("\n결과 :");
	printf("%d+%d+%d+%d=%d", a, b, c, d, result);

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()

{
	int a, b, c, d;
	printf("ù ��° ���� �Է��ϼ��� : ");
	scanf("%d", &a);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf("%d", &b);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf("%d", &c);

	printf("�� ��° ���� �Է��ϼ��� : ");
	scanf("%d", &d);


	int result = a + b + c + d;
	printf("\n��� :");
	printf("%d+%d+%d+%d=%d", a, b, c, d, result);

}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int a, b;
	char ch;

	printf("������ �� �ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &ch, &b);
	//����� �Է��� �޾� a, ch, b�� �����ϰ� ���⸦ �������� �����Ͽ� ����?����?���� ������ ó��

	switch (ch) //ch�� ���� �ش� case�� �̵�
	{
	case '+':
		printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
		break;
	case '-':
		printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
		break;
	case '*':
		printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
		break;
	case '/':
		printf("%d / %d = %d �Դϴ�. \n", a, b, a / b);
		break;
	case '%':
		printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
		break;
	default://case�� �ش����� �ʴ� ������ �Է��ϸ� ��� ���
		printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
	}
}

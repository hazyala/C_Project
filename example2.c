#include<stdio.h>
void main() {

	int a, b, k, result;
	int i = 1;

	printf("ù ��° ����� ���� �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("1�� �Է��ϸ� ����, 2�� �Է��ϸ� ����, 3�� �Է��ϸ� ����, 4�� �Է��ϸ� �������� ����˴ϴ� : ");
	scanf_s("%d", &k);

	printf("�� ��° ����� ���� �Է��ϼ��� : ");
	scanf_s("%d", &b);

	if (k == 1) {
		result = a + b;
		printf("%d+%d=%d\n", a, b, result);
	}
	if (k == 2) {
		result = a - b;
		printf("%d-%d=%d\n", a, b, result);
	}
	if (k == 3) {
		result = a * b;
		printf("%d*%d=%d\n", a, b, result);
	}
	if (k == 4) {
		result = a / b;
		printf("%d/%d=%d\n", a, b, result);
	}
}
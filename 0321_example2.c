#include<stdio.h>
void main() {

	int a, b, k, result;
	int i = 1;

	printf("첫 번째 계산할 값을 입력하세요 : ");
	scanf_s("%d", &a);

	printf("1을 입력하면 덧셈, 2를 입력하면 뺄셈, 3을 입력하면 곱셈, 4를 입력하면 나눗셈이 실행됩니다 : ");
	scanf_s("%d", &k);

	printf("두 번째 계산할 값을 입력하세요 : ");
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
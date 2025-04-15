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
		if (b != 0) { //b가 0이 아닐 때 결과를 출력하고, 0일때는 출력하지 않도록 함
			result = a / b;
			printf("%d/%d=%d\n", a, b, result);
		}
		else
			printf("계산할 수 없습니다. 다시 입력하세요. \n");
	}

}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void main()
{
	int type, data;
	int k;

	while (1) { // 한번만 실행되지 않고 코드가 무한으로 반복되며, 원할때 탈출 할 수 있도록 while문 사용
		printf("1을 입력하면 2진수, 2를 입력하면 8진수, 3을 입력하면 10진수, 4를 입력하면 16진수가 출력됩니다.");
		printf(" \n모든 결과를 출력하기 원하시면 5를, 종료를 원하시면 ESC를 눌러주세요. : ");

		/*scanf("%d", &type);*/	 // 원래 이렇게 시도하였으나, ESC로 종료를 구현하기 위해 아래와 같이 수정
		type = _getch();// esc를 사용하기 위해 아스키 코드로 변환하는 과정이 필요하여 _getch를 활용하여 지정
		if (type == 27) break; // esc를 아스키코드로 입력하고, esc를 통해 탈출 할 수 있도록 함.
		printf("%c", type); // scanf 제거로 인해 가장 처음 출력되는 문구의 결과 값이 프롬프트에 나오지 않아서 사용. 
		//type = _getchar로 지정해뒀기 때문에 %c로 인간이 사용하는 문자로 출력되게 함.
		getchar(); //getchar 없이는 숫자 입력 하자마자 바로 실행되기 때문에 enter 후 실행되도록 getchar사용

		printf("\n값을 입력하세요 : ");
		if (type == 49) { //2진수
			{
				scanf("%d", &k);
				for (int i = 15; i >= 0; i--) {
					printf("%d", (k >> i) & 1);
					if (i % 4 == 0) // 가독성을 위해 4자리씩 끊어서 출력할 수 있도록 함
						printf(" ");
				}
			}
			printf("\n");//가독성을 위해 줄바꿈 사용
		}

		if (type == 50) { // 8진수
			scanf("%o", &data);
			printf("8진수 ==>%o\n", data);
		}
		if (type == 51) { //10진수
			scanf("%d", &data);
			printf("10진수 ==>%d\n", data);
		}

		if (type == 52) { // 16진수
			scanf("%x", &data);
			printf("16진수 ==>%x\n", data);
		}

		if (type == 53) {
			// 2진수 처리부분까지 한번에 도출 되기 위해 코드를 가져옴
			scanf("%d", &data);
			printf("\n결과 \n2진수 : ");
			for (int i = 15; i >= 0; i--) {
				printf("%d", (data >> i) & 1);
				if (i % 4 == 0)
					printf(" ");
			}
			printf("\n");
			printf("8진수 : %o\n", data);
			printf("10진수 : %d\n", data);
			printf("16진수 : %X\n", data);
			printf("\n");
		}
		while (getchar() != '\n'); // 규칙적인 줄바꿈 출력을 위해 사용
	}
}

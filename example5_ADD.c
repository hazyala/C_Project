#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void main()
{
	int type, data;
	int k;

	while (1) { // �ѹ��� ������� �ʰ� �ڵ尡 �������� �ݺ��Ǹ�, ���Ҷ� Ż�� �� �� �ֵ��� while�� ���
		printf("1�� �Է��ϸ� 2����, 2�� �Է��ϸ� 8����, 3�� �Է��ϸ� 10����, 4�� �Է��ϸ� 16������ ��µ˴ϴ�.");
		printf(" \n��� ����� ����ϱ� ���Ͻø� 5��, ���Ḧ ���Ͻø� ESC�� �����ּ���. : ");

		/*scanf("%d", &type);*/	 // ���� �̷��� �õ��Ͽ�����, ESC�� ���Ḧ �����ϱ� ���� �Ʒ��� ���� ����
		type = _getch();// esc�� ����ϱ� ���� �ƽ�Ű �ڵ�� ��ȯ�ϴ� ������ �ʿ��Ͽ� _getch�� Ȱ���Ͽ� ����
		if (type == 27) break; // esc�� �ƽ�Ű�ڵ�� �Է��ϰ�, esc�� ���� Ż�� �� �� �ֵ��� ��.
		printf("%c", type); // scanf ���ŷ� ���� ���� ó�� ��µǴ� ������ ��� ���� ������Ʈ�� ������ �ʾƼ� ���. 
		//type = _getchar�� �����صױ� ������ %c�� �ΰ��� ����ϴ� ���ڷ� ��µǰ� ��.
		getchar(); //getchar ���̴� ���� �Է� ���ڸ��� �ٷ� ����Ǳ� ������ enter �� ����ǵ��� getchar���

		printf("\n���� �Է��ϼ��� : ");
		if (type == 49) { //2����
			{
				scanf("%d", &k);
				for (int i = 15; i >= 0; i--) {
					printf("%d", (k >> i) & 1);
					if (i % 4 == 0) // �������� ���� 4�ڸ��� ��� ����� �� �ֵ��� ��
						printf(" ");
				}
			}
			printf("\n");//�������� ���� �ٹٲ� ���
		}

		if (type == 50) { // 8����
			scanf("%o", &data);
			printf("8���� ==>%o\n", data);
		}
		if (type == 51) { //10����
			scanf("%d", &data);
			printf("10���� ==>%d\n", data);
		}

		if (type == 52) { // 16����
			scanf("%x", &data);
			printf("16���� ==>%x\n", data);
		}

		if (type == 53) {
			// 2���� ó���κб��� �ѹ��� ���� �Ǳ� ���� �ڵ带 ������
			scanf("%d", &data);
			printf("\n��� \n2���� : ");
			for (int i = 15; i >= 0; i--) {
				printf("%d", (data >> i) & 1);
				if (i % 4 == 0)
					printf(" ");
			}
			printf("\n");
			printf("8���� : %o\n", data);
			printf("10���� : %d\n", data);
			printf("16���� : %X\n", data);
			printf("\n");
		}
		while (getchar() != '\n'); // ��Ģ���� �ٹٲ� ����� ���� ���
	}
}

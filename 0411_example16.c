#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //���ڿ� ���� ������ strlen�Լ��� ����ϱ� ����

void main() 
{
	char str[100]; //�ִ� 99�� + Null���ڸ� ������ ���ڿ� �迭
	int str_cnt; //���ڿ� ���� �����
	int i;

	printf("������ �� ���ڸ� �Է�(100�� ����) : "); //����ڿ��� ���ڿ� �Է¹ޱ�
	scanf("%s", str); //%s�� ���� �Է� �Ұ�. ���� �Է� ������ �Է¹���

	printf("\n");
	printf("�Է��� ���ڿ� ==> %s\n", str); //�Էµ� ���ڿ� ���
	printf("��ȯ�� ���ڿ� ==> "); // �������� ��ȯ�� ���ڿ� ���

	str_cnt = strlen(str); //���ڿ� ���̸� ���� str cnt�� ���� (Null ����)

	for (i = str_cnt; i >= 0; i--) // ���� ���
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int type, data;

    printf("�Է����� ����<1>10 <2>16 <3>8 :");
    scanf("%d", &type);

    printf("�� �Է� :");

    if (type == 1)
    {
        scanf("%d", &data);
        printf("10���� ==> %d \n", data);
    }

    if (type == 2)
    {
        scanf("%d", &data);
        printf("16���� ==> %x \n", data);
    }

    if (type == 3)
    {
        scanf("%d", &data);
        printf("8���� ==> %o \n", data);
    }

}
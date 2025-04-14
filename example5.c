#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int type, data;

    printf("입력진수 결정<1>10 <2>16 <3>8 :");
    scanf("%d", &type);

    printf("값 입력 :");

    if (type == 1)
    {
        scanf("%d", &data);
        printf("10진수 ==> %d \n", data);
    }

    if (type == 2)
    {
        scanf("%d", &data);
        printf("16진수 ==> %x \n", data);
    }

    if (type == 3)
    {
        scanf("%d", &data);
        printf("8진수 ==> %o \n", data);
    }

}
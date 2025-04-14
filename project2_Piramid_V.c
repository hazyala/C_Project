#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
     int a;
    while (a % 2 == 0) {
       
        printf("피라미드의 넓이를 홀수로 입력하세요 : "); //사용자가 입력하는 a는 피라미드 맨 아래층의 별의 개수가 됨
        scanf("%d", &a);
        printf("홀수만 입력해주세요. \n");
        break;
    }

    for (int i = 0; i <  a; i++) // i는 0에서 시작하고 i가 a보다 작을때까지 i를 1씩 증감한다 (i는 피라미드의 i층이 됨)
    {
        if (i <= (a - 1) / 2) // 2번째 중첩 for문이 넘치는 현상을 막아줌. 사실 그냥  1번째 for문의 조건을 수정해주면 간편해지나, 그냥 이렇게 하고 싶었음.
        {
            for (int j = i; j < ((a - 1) / 2); j++) // 좌측 공백을 출력
            {
                printf("^");
            }

            for (int j = 0; j < a - 2 * ((a - 1) / 2 - i); j++) // if문이 막아주기 때문에 for (int j = 0; j <= i * 2; j++) 로 해도 동일한 결과가 나옴.
            {
                printf("*");
            }

            for (int j = i; j < ((a - 1) / 2); j++)
            {
                printf("^");
            }
        }
        printf("\n");
    }
}

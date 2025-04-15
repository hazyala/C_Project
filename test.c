#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
    int a;
    printf("층을 홀수로 입력하세요 : "); //다이아몬드를 구성하려면 층은 홀수가 되므로 홀수로 입력
    scanf("%d", &a);

    //반복문은 중괄호가 없을 시 1줄까지 반복시키므로 가독성 향상을 위해 중괄호 제거
    // 다이아몬드 상단 (다이아몬드 중앙 포함)
    for (int i = 0; i <= a / 2; i++) // i는 현재 층의 번호, 총 (a/2)+1층 만큼 반복
    {
        for (int j = 0; j < (a / 2) - i; j++) printf(" ");// 좌측 공백 출력: 한줄씩 감소
        for (int j = 0; j < 2 * i + 1; j++) printf("*"); // 별 출력: 한 줄씩 홀수 개수로 증가
        printf("\n");
    }

    // 다이아몬드 하단 (다이아몬드 중앙 제거) (역피라미드)
    for (int i = 0; i < a / 2; i++) // i는 아래쪽 층 번호 (0부터 시작), 총 a/2줄 반복
    {
        for (int j = 0; j <= i; j++) printf(" "); // 좌측 공백 출력: 한줄씩 증가
        for (int j = 0; j < 2 * ((a / 2) - i - 1) + 1; j++) printf("*");  // 별 출력: 한줄씩 역순으로 -2개씩 감소
        printf("\n");
    }
}

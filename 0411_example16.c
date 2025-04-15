#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> //문자열 길이 측정용 strlen함수를 사용하기 위함

void main() 
{
	char str[100]; //최대 99자 + Null문자를 저장할 문자열 배열
	int str_cnt; //문자열 길이 저장용
	int i;

	printf("영문자 및 숫자를 입력(100자 이하) : "); //사용자에게 문자열 입력받기
	scanf("%s", str); //%s는 공백 입력 불가. 공백 입력 전까지 입력받음

	printf("\n");
	printf("입력한 문자열 ==> %s\n", str); //입력된 문자열 출력
	printf("변환된 문자열 ==> "); // 역순으로 변환된 문자열 출력

	str_cnt = strlen(str); //문자열 길이를 구해 str cnt에 저장 (Null 제외)

	for (i = str_cnt; i >= 0; i--) // 역순 출력
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
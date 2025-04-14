#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	int year;

	printf("연도를 입력하세요. :");
	scanf("%d", &year);

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		//윤년 : ⓐ 4로 나누어 떨어지지만 100으로 나누어 떨어지지 않으면 윤년이다.
		//       ⓑ 400으로 나누어 떨어지면 윤년이다.	      

		//year%4 == 4로 나누어 떨어지며 100으로 나누어 나머지가 0이 아닌 것을 and 연산
		//year % 400 == 0 400으로 나누어 떨어지는 것을 OR연산		

		printf("%d 년은 윤년입니다. \n", year);
	else
		printf("%d 년은 윤년이 아닙니다. \n", year);
	//if문으로 윤년인것은 T else로 아닌 것은 F로 각각 알 수 있도록 출력 함
}
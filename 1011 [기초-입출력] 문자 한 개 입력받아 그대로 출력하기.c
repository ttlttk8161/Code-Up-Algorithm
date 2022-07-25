22.07.25
//1011 [기초-입출력] 문자 한 개 입력받아 그대로 출력하기.

//char는 1byte만 사용하는 자료형, ASCII(아스키코드)를 취급함.

#include <stdio.h>

int main(void)
{
  char happy; // char로 문자변수 받을수있음.
  scanf("%c", &happy);
  printf("%c", happy);
  return 0;
}

/*
입력 예시
*

출력 예시
*

입력예시2
1241124
출력예시2
1
이유) char 자체가 하나의 문자, 1byte만 취급해서 그렇다.
*/

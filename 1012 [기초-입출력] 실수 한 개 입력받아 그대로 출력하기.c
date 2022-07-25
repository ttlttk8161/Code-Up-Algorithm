#include <stdio.h>

int main(void)
{
  float happy; // char로 문자변수 받을수있음.
  scanf("%f", &happy);
  printf("%f", happy);
  return 0;
}


/* 입력예시 1.21651365464
출력예시 1.216513
6자리 이하 소수점은 안나옴. */ 

* float는 소수점6자리 이하까지 나타내주는 변수형임.

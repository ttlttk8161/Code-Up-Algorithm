#include <stdio.h>

int main(void)
{
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d %d", a, b);
  return 0;
}

/* 입력예시
두개의 정수가 공백으로 구분되어 입력된다.(스페이스바 혹은 행구분(엔터)를 통한 구분) 

ex1) 1 2

ex2) 1
     2

출력예시
입력받은 두 정수를 공백으로(스페이스바)로 구분하여 그대로 출력한다. 
  
A1) 1 2

A2) 1 2
*/

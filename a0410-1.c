#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main()
{
	
	int a, b;
	int result;


	printf("변수 a를 입력하세요 : ");
	scanf("%d", &a);
	printf("변수 b를 입력하세요 : ");
	scanf("%d", &b);
	result = a + b;
	printf(" %d + %d = %d", a, b, result);
	

}
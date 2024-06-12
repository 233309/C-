#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include"Add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum=Add(a, b);
	printf("%d", sum);
}
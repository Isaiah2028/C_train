#include<stdio.h>
#pragma once
int main() {
	 int a;
	 int b;
	int *pointer_1;
	int *pointer_2;
	a = 100;
	b = 10;
	pointer_1 = &a;
	pointer_2 = &b;


	printf("%d,%d\n", a, b);
	printf("%d,%d\n", *pointer_1, *pointer_2);
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int g_a = 1000;

//写个函数返回全局变量g_a的地址
int * getAdrress() {
	return &g_a;

	/*int *p = &g_a;
	return p;*/
}

void test01() {

	int  *p = getAdrress();
	printf("g_a = %d\n",g_a);
	printf("g_a = %d\n",*p);

	*p = 2000;

	printf("g_a = %d\n", g_a);
	printf("g_a = %d\n", *p);

}

int main() {


	test01();


	system("pause");
	return EXIT_SUCCESS;
}



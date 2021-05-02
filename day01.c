#include<stdio.h>

void  test()
{
	int a = 10;
	int *p;

	p = &a;

	*p = 20;
	printf("a =%d\n", a);
	printf("*p =%d\n", *p);
	printf("a地址 =%d\n", &a);
	printf("p地址 =%d\n", p);
}

//指针大小
void test02() {
	//指针在32位操作系统下指针都是4个字节大小
	//指针在64位操作系统下指针都是8个字节大小
	printf("sizeof int *=\n",sizeof(int *));
	printf("sizeof char *=\n",sizeof(char *));
	printf("sizeof double *=\n",sizeof(double *));
	printf("sizeof short *=\n",sizeof(short *));

}
int main() {


	//test();
	test02();

	return 0;

}
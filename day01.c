#include<stdio.h>

void  test()
{
	int a = 10;
	int *p;

	p = &a;

	*p = 20;
	printf("a =%d\n", a);
	printf("*p =%d\n", *p);
	printf("a��ַ =%d\n", &a);
	printf("p��ַ =%d\n", p);
}

//ָ���С
void test02() {
	//ָ����32λ����ϵͳ��ָ�붼��4���ֽڴ�С
	//ָ����64λ����ϵͳ��ָ�붼��8���ֽڴ�С
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
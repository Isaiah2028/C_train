#include<stdio.h>
#include<string.h>
#include<stdlib.h>



//ֵ���ݣ��޸Ĳ���ʵ�Ρ�	
void mysWap(int num1,int num2) {
	int temp =num1;
	num1 = num2;
	num2 = temp;

	printf("num1 = %d\n", num1);
	printf("num2 = %d\n", num2);
}

void test01(){

	int a = 10;
	int b = 20;

	mysWap(a,b);

	printf("a = %d\n",a);
	printf("b = %d\n",b);
}


//��ַ����
void mysWap2(int * p1,int * p2) {

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	printf("*p1 =%d \n",*p1);
	printf("*p2 =%d \n",*p2);
}

void test02() {

	int a = 10;
	int b = 20;

	mysWap2(&a, &b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
int main() {
	//test01();


	test02();
	return 0;
}
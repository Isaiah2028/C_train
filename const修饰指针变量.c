#include<stdio.h>

//const ���ε���*   ����ָ��
void test01() {

	int a =10;
	const int *p = &a;//�ȼ��� int const *p = &a;
	//*p = 20; //erro *p ֻ����ָ��ָ���ֵ ����һ�޸�
	
	int b = 1000;
	p = &b;//��ȷ��ָ���ָ�� �����޸�

	printf("%d", *p);

}




//const ���ε��� p  ָ�볣��
void test02() {

	int a = 10;
	int * const p = &a;
	*p = 20;//��ȷ��ָ��ָ���ֵ ���Ը�

	int b = 100;
	//p = &b; //���󣬣�ָ���ָ�� �����Ը�

	printf("%d", *p);

}

//const����*��p
void test03() {

	int a = 10;
	const int * const p = &a;
	
	//*p = 100; //ָ��ָ���ֵ ����һ�޸�

	int b = 20;

	//p = &b; //ָ���ָ�� �����Ը�



	printf("%d", *p);

}

int main() {


	//test();
	//test02();
	test03();
	return 0;

}
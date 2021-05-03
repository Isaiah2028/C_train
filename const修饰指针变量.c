#include<stdio.h>

//const 修饰的是*   常量指针
void test01() {

	int a =10;
	const int *p = &a;//等价于 int const *p = &a;
	//*p = 20; //erro *p 只读，指针指向的值 不可一修改
	
	int b = 1000;
	p = &b;//正确，指针的指向 可以修改

	printf("%d", *p);

}




//const 修饰的是 p  指针常量
void test02() {

	int a = 10;
	int * const p = &a;
	*p = 20;//正确，指针指向的值 可以改

	int b = 100;
	//p = &b; //错误，，指针的指向 不可以改

	printf("%d", *p);

}

//const修饰*和p
void test03() {

	int a = 10;
	const int * const p = &a;
	
	//*p = 100; //指针指向的值 不可一修改

	int b = 20;

	//p = &b; //指针的指向 不可以改



	printf("%d", *p);

}

int main() {


	//test();
	//test02();
	test03();
	return 0;

}
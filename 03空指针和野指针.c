#include<stdio.h>

test() {

	//指针变量，指向地址编号为0的地址
	int *p = NULL;

	//不可以访问空指针指向的内容
	//内存地址编号0-255之间被系统占用，不可访问。
	printf("%d\n", *p);
}


//野指针
void test02() {

	//指向非法的地址空间
	int *p = 0xffffff;
	printf("%d\n", *p);

}
void test03() {

	//未初始化，也属于野指针
	int *p ;
	printf("%d\n", *p);//vs下运行错误

}

int main() {

	test();
	return 0;

}
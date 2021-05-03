#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01() {
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;
	int num4 = 40;

	int * arr[4] = { &num1,&num2,&num3,&num4 };

	int len = sizeof(arr) / sizeof(int *);

	for (int  i = 0; i < len; i++)
	{
		printf("%d\n",*arr[i]);
		//printf("%d\n",* *(arr+i));//不推荐使用
	}


}

void test02() {

	char * arr[4] = { "aaa","bbb","ccc","ddd" };

	int len = sizeof(arr) / sizeof(char*);
	for (int i = 0; i < len; i++)
	{
		printf("%s\n", arr[i]);


	}
}

int main() {

	//test01();
	test02();

}

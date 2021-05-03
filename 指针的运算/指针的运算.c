#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int * p1 = arr;
	int * p2 = arr[4];

	//两个指针做加方法无意义。
	printf("p1 + p2 =%d\n",(int)p1 + (int)p2);

   //两个指向同一个数组的指针相减可以得到两个指针之间的个数。
	printf("p2 - p1 =%d\n",p2 -p1);

	//乘法无意义
	printf("p2 - p1 =%d\n",(int)p2 * (int)p1);

	//指针的其他运算，
	//比较指针的大小
	if (p1 = NULL)
	{
		printf("p1是空指针\n");
	}
	else
	{
		printf("p1不是空指针\n");

		if (p1 !=p2)
		{
			printf("p1和p2不相等\n");
		}
		else {
			printf("p1和p2相等\n");
			
			}
	}
}

int main() {

	test01();

	return 0;

}
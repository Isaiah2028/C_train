#include<stdio.h>

void test01() {

	int arr[5] = {1,2,3,4,5};

	printf("sizeof arr = %d\n",sizeof(arr));

	//arr指向数组首元素的地址，也可以当指针用，
	printf("%d\n", arr);
	printf("%d\n", arr+1);
	
	//访问第一个元素
	printf("第一个元素：%d\n",arr[0]);
	printf("第一个元素：%d\n",*arr);

	printf("第二个元素：%d\n", arr[1]);
	printf("第二个元素：%d\n", *(arr+1));

	//[]本质上就是*()的缩写。
	printf("第二个元素：%d\n", *(1 + arr));
	printf("第二个元素：%d\n", 1[arr]);//不推荐，可读性差，别人看不懂


	for (int  i = 0; i <5; i++)
	{
		//printf("%d\n",arr[i]);
		printf("%d\n",*(arr+i));

	
	}


}


void test02() {


	//通过指针操作数组
	int arr[5] = { 1,2,3,4,5 };

	int * p = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n",p[i]);
	}

	//p 和arr 的区别
	printf("size of p =%d\n",sizeof(p));
	printf("size of arr =%d\n",sizeof(arr));

	//访问数组的时候，下标可否为负数
	int * p2 = &arr[2];
	printf("*p2 =%d\n",*p2);
	printf("*p2 =%d\n",p2[-1]);
	printf("*p2 =%d\n",*(p2-1));



}

//案例
void test03() {
	int arr[5] = { 1,2,3,4,5 };

	int * p = &arr;

	printf("%d\n",*p++);//1
	printf("%d\n",(*p)++);//2
	printf("%d\n",*(p++));//3

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", arr[i]);

	}

}
void test04() {

	int arr[15] = { 1,2,3,4,5,6,7,8,9,10,12,13,14,15 };

	printf("%d\n", arr[*(arr + *(arr + arr[3]))]);

}


int main() {

	//test01();

	//test02();
	//test03();
	test04();
	return 0;

}
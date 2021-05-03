#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//当数组名做函数参数传递的是后会被退化为一个指针，指向数组第一个元素的地址
void printArry(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void test01(){

	int arr[5] = {1,2,3,4,5};
	int len = sizeof(arr) / sizeof(int);

	printArry(arr,len);

	//printf("printArry - sizeof  arr = %d",arr);
}

//void setArry(int *arr, int len) {//和下面语句等同

void setArry(int arr[], int len) {
	

	for (int i = 0; i < len; i++)
	{
		scanf_s(" %d \n",&arr[i]);
	}
}

void test02() {
	int arr[5] = { 0 };

	int len = sizeof(arr) / sizeof(int);

	//给数组赋值
	printf("给数组赋值：\n");
	setArry(arr,len);

	//打印数组，用上面封装好的打印函数
	printf("赋值好的数组结果：\n");
	printArry(arr,len);

}



//获取一个数组最大值函数

int getMax(int arr[],int len) {

	int max = 0;//先认定第一个为最大值，记录下标
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}
	return arr[max];

}
//找出数组中最大数
void test03() {

	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	//给数组赋值
	printf("给数组赋值：\n");
	setArry(arr, len);
	// 打印数组，用上面封装好的打印函数
	printf("赋值好的数组结果：\n");
	printArry(arr, len);



	//获取数组中的最大值
	int max = getMax(arr,len);

	printf("数组中的最大值为：%d\n",max);


}


//获取平均值函数

int getAverage(int arr[],int len) {

	int sum = 0;
	int average = 0;
	

	for (int  i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	
	average = sum / len;
	return average;
	

}


//获取数组中的平均值
void test04() {

	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	//给数组赋值
	printf("给数组赋值：\n");
	setArry(arr, len);
	// 打印数组，用上面封装好的打印函数
	printf("赋值好的数组结果：\n");
	printArry(arr, len);

	//获取平均值
	int average = getAverage(arr, len);
	printf("数组中的平均值为：%d\n", average);
	


}

int main() {

	//test01();

	//test02();

	//test03();
	test04();
	return 0;
}



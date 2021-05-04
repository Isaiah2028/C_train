
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//冒泡,升序
void bubbleSort(int arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		for (int  j = 0; j < len -1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
}


//打印数组
void printArry(int arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		//printf("arr[%d] = %d\n",i,arr[i]);
		printf("%d ",arr[i]);
	}
	printf("\n");

}

//数组重新赋值
void reInputArr(int arr[], int len) {
	printf("请给字符数组赋值:\n");
	fgets(arr, len, stdin);

	/*for (int i = 0; i < len; i++)
	{
		scanf("%d",arr[i]);
	}
*/

}
void test01() {

	int arr[10] = {1,2,6,75,32,5,63,5,3,85};

	//1利用函数f，实现排序
	int len = sizeof(arr) / sizeof(int);
	bubbleSort(arr,len);

	//2打印素组
	printf("排序后遍历的结果：");
	printArry(arr,len);
}


//利用函数给数组重新赋值
void test02() {

	char arr[1024] = { 0 };

	int len = sizeof(arr) ;

	// 数组重新赋值
	reInputArr(arr,len);

	//遍历输出重新赋值后的数组，
	
	printArry(arr,len);


}

int main() {

	//test01();

	//test02();

	char arr[10] = { 0 };
	/*sprintf(a,"hello, world!");
	strcpy(a, "hello, java！");*/

	strcpy(arr, "hello");
	int len = sizeof(arr) / sizeof(char);

	for (int i = 0; i < len; i++)
	{
		printf("%d  ",(char)arr[i]);

	}


	system("pause");
	return EXIT_SUCCESS;
}



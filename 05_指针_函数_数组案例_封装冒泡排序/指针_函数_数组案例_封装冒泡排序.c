
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//ð��,����
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


//��ӡ����
void printArry(int arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		//printf("arr[%d] = %d\n",i,arr[i]);
		printf("%d ",arr[i]);
	}
	printf("\n");

}

//�������¸�ֵ
void reInputArr(int arr[], int len) {
	printf("����ַ����鸳ֵ:\n");
	fgets(arr, len, stdin);

	/*for (int i = 0; i < len; i++)
	{
		scanf("%d",arr[i]);
	}
*/

}
void test01() {

	int arr[10] = {1,2,6,75,32,5,63,5,3,85};

	//1���ú���f��ʵ������
	int len = sizeof(arr) / sizeof(int);
	bubbleSort(arr,len);

	//2��ӡ����
	printf("���������Ľ����");
	printArry(arr,len);
}


//���ú������������¸�ֵ
void test02() {

	char arr[1024] = { 0 };

	int len = sizeof(arr) ;

	// �������¸�ֵ
	reInputArr(arr,len);

	//����������¸�ֵ������飬
	
	printArry(arr,len);


}

int main() {

	//test01();

	//test02();

	char arr[10] = { 0 };
	/*sprintf(a,"hello, world!");
	strcpy(a, "hello, java��");*/

	strcpy(arr, "hello");
	int len = sizeof(arr) / sizeof(char);

	for (int i = 0; i < len; i++)
	{
		printf("%d  ",(char)arr[i]);

	}


	system("pause");
	return EXIT_SUCCESS;
}



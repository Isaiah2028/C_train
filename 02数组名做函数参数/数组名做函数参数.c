#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//���������������������ݵ��Ǻ�ᱻ�˻�Ϊһ��ָ�룬ָ�������һ��Ԫ�صĵ�ַ
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

//void setArry(int *arr, int len) {//����������ͬ

void setArry(int arr[], int len) {
	

	for (int i = 0; i < len; i++)
	{
		scanf_s(" %d \n",&arr[i]);
	}
}

void test02() {
	int arr[5] = { 0 };

	int len = sizeof(arr) / sizeof(int);

	//�����鸳ֵ
	printf("�����鸳ֵ��\n");
	setArry(arr,len);

	//��ӡ���飬�������װ�õĴ�ӡ����
	printf("��ֵ�õ���������\n");
	printArry(arr,len);

}



//��ȡһ���������ֵ����

int getMax(int arr[],int len) {

	int max = 0;//���϶���һ��Ϊ���ֵ����¼�±�
	for (int i = 1; i < len; i++)
	{
		if (arr[i] > arr[max])
		{
			max = i;
		}
	}
	return arr[max];

}
//�ҳ������������
void test03() {

	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	//�����鸳ֵ
	printf("�����鸳ֵ��\n");
	setArry(arr, len);
	// ��ӡ���飬�������װ�õĴ�ӡ����
	printf("��ֵ�õ���������\n");
	printArry(arr, len);



	//��ȡ�����е����ֵ
	int max = getMax(arr,len);

	printf("�����е����ֵΪ��%d\n",max);


}


//��ȡƽ��ֵ����

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


//��ȡ�����е�ƽ��ֵ
void test04() {

	int arr[5] = { 0 };
	int len = sizeof(arr) / sizeof(int);

	//�����鸳ֵ
	printf("�����鸳ֵ��\n");
	setArry(arr, len);
	// ��ӡ���飬�������װ�õĴ�ӡ����
	printf("��ֵ�õ���������\n");
	printArry(arr, len);

	//��ȡƽ��ֵ
	int average = getAverage(arr, len);
	printf("�����е�ƽ��ֵΪ��%d\n", average);
	


}

int main() {

	//test01();

	//test02();

	//test03();
	test04();
	return 0;
}



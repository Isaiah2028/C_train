
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//�������¸�ֵ

void setArr(char arr[], int len) {
	printf("���������¸�ֵ��\n");
	fgets(arr,len,stdin);
}

//�����������

void arrSort(char arr[],int len) {
	
	for (int  i = 0; i < len; i++)
	{
		for (int j = 0; j < len-1; j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

	}

}

//�����ҵ����ֵ
int getMax(char arr[],int len) {
	int max = 0;

	for (int i = 0; i < len; i++)
	{
		if (max<arr[i])
		{
			max = arr[i];
		}
	}
	return max;



}

//�����ҵ���Сֵ
int geMin(char arr[],int len) {

	int min = arr[1];
	for (int i = 0; i < len; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}

	return min;
	
}

// �������ܺͣ�
int  test01(char arr[], int len) {
	int sum = 0;
	for (int  i = 0; i < len; i++)
	{
		sum += arr[i];

	}
	return sum;
}


//������ƽ��ֵ
int getAverage(char arr[]) {

	int len = sizeof(arr);
	int average = 0;

	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	average = sum / len;
	return average;


	
}



int main(char arr[],int len) {



	system("pause");
	return EXIT_SUCCESS;
}



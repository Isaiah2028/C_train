#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void test01() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int * p1 = arr;
	int * p2 = arr[4];

	//����ָ�����ӷ��������塣
	printf("p1 + p2 =%d\n",(int)p1 + (int)p2);

   //����ָ��ͬһ�������ָ��������Եõ�����ָ��֮��ĸ�����
	printf("p2 - p1 =%d\n",p2 -p1);

	//�˷�������
	printf("p2 - p1 =%d\n",(int)p2 * (int)p1);

	//ָ����������㣬
	//�Ƚ�ָ��Ĵ�С
	if (p1 = NULL)
	{
		printf("p1�ǿ�ָ��\n");
	}
	else
	{
		printf("p1���ǿ�ָ��\n");

		if (p1 !=p2)
		{
			printf("p1��p2�����\n");
		}
		else {
			printf("p1��p2���\n");
			
			}
	}
}

int main() {

	test01();

	return 0;

}
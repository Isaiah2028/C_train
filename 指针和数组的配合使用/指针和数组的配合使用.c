#include<stdio.h>

void test01() {

	int arr[5] = {1,2,3,4,5};

	printf("sizeof arr = %d\n",sizeof(arr));

	//arrָ��������Ԫ�صĵ�ַ��Ҳ���Ե�ָ���ã�
	printf("%d\n", arr);
	printf("%d\n", arr+1);
	
	//���ʵ�һ��Ԫ��
	printf("��һ��Ԫ�أ�%d\n",arr[0]);
	printf("��һ��Ԫ�أ�%d\n",*arr);

	printf("�ڶ���Ԫ�أ�%d\n", arr[1]);
	printf("�ڶ���Ԫ�أ�%d\n", *(arr+1));

	//[]�����Ͼ���*()����д��
	printf("�ڶ���Ԫ�أ�%d\n", *(1 + arr));
	printf("�ڶ���Ԫ�أ�%d\n", 1[arr]);//���Ƽ����ɶ��Բ���˿�����


	for (int  i = 0; i <5; i++)
	{
		//printf("%d\n",arr[i]);
		printf("%d\n",*(arr+i));

	
	}


}


void test02() {


	//ͨ��ָ���������
	int arr[5] = { 1,2,3,4,5 };

	int * p = arr;

	for (int i = 0; i < 5; i++)
	{
		printf("%d\n",p[i]);
	}

	//p ��arr ������
	printf("size of p =%d\n",sizeof(p));
	printf("size of arr =%d\n",sizeof(arr));

	//���������ʱ���±�ɷ�Ϊ����
	int * p2 = &arr[2];
	printf("*p2 =%d\n",*p2);
	printf("*p2 =%d\n",p2[-1]);
	printf("*p2 =%d\n",*(p2-1));



}

//����
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
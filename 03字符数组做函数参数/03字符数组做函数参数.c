
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1�ַ����鸳ֵ
void setCharArry(char arr[],int len) {
	printf("����ַ����鸳ֵ\n");
	fgets(arr, len, stdin);
	

}

//1ʵ���ַ�ͳ�ƺ���
int myStrlen(char arr[]) {
	
	//wile ѭ������ÿ������

	int count = 0;
	/*while (arr[count] !='\0')
	{
		count++;

	}
	return count;*/

	//�򻯺�����һ������ȥ1
	while (arr[count++] != '\0')
	{
	}
	return count -1;
}

//3��ʵ���ַ������Сдת��
void changeArry(char arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		if (arr[i]>='a'&&arr[i]<='z')
		{
			//arr[i] = arr[i] - 32;
			arr[i] = arr[i] -('a' - 'A');//�ǲ�ס32�� ���������

		}
		else if (arr[i] >=  'A' && arr[i] <= 'Z')
		{
			//arr[i] = arr[i] + 32;
			arr[i] = arr[i] + ('a'-'A');
		}
		
	}

}



void test01() {
	//printf("hello,world");

	char buff[1024] = { 0 };

	//1��buff���鸳ֵ
	setCharArry(buff, sizeof(buff));

	

	//buf = hello world\n0000000
	//��\0 ��Ϊ\0
	buff[strlen(buff) - 1] = '\0';

	printf("buf = %s\n", buff);

	//2�Լ�ʵ���ַ�ͳ��strlen������
	int  count = myStrlen(buff);

	printf("Strlen = %d\n", strlen(buff));
	printf("myStrlen = %d\n", count);

	//3ʵ���ַ������Сдת��

	printf("ת��ǰ��%s\n", buff);


	changeArry(buff,count);
	printf("ת����%s\n", buff);


}

int main() {

	test01();
	system("pause");
	return EXIT_SUCCESS;
}




#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//1字符数组赋值
void setCharArry(char arr[],int len) {
	printf("请给字符数组赋值\n");
	fgets(arr, len, stdin);
	

}

//1实现字符统计函数
int myStrlen(char arr[]) {
	
	//wile 循环遍历每个数组

	int count = 0;
	/*while (arr[count] !='\0')
	{
		count++;

	}
	return count;*/

	//简化后会多了一个最后减去1
	while (arr[count++] != '\0')
	{
	}
	return count -1;
}

//3，实现字符数组大小写转换
void changeArry(char arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		if (arr[i]>='a'&&arr[i]<='z')
		{
			//arr[i] = arr[i] - 32;
			arr[i] = arr[i] -('a' - 'A');//记不住32用 这个方法。

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

	//1给buff数组赋值
	setCharArry(buff, sizeof(buff));

	

	//buf = hello world\n0000000
	//将\0 改为\0
	buff[strlen(buff) - 1] = '\0';

	printf("buf = %s\n", buff);

	//2自己实现字符统计strlen函数。
	int  count = myStrlen(buff);

	printf("Strlen = %d\n", strlen(buff));
	printf("myStrlen = %d\n", count);

	//3实现字符数组大小写转换

	printf("转换前：%s\n", buff);


	changeArry(buff,count);
	printf("转换后：%s\n", buff);


}

int main() {

	test01();
	system("pause");
	return EXIT_SUCCESS;
}



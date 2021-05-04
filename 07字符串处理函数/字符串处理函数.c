#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1.s	strcpy �ַ�����������
void test01() {

	char buf[32] = { 0 };

	//���ַ�������и�ֵ��
	//buf = "hello, world!";//����д����������һ�죬java���ǿ��Ե� String buff �� buff= ��hellowm world����
	strcpy(buf, "hello, world!\n");
	printf("buf = %s", buf);

	strcpy(buf, "hello\0world!\n");//����������\0����ǰ����,�ַ��������������������
	printf("buf = %s", buf);

	char buf2[10] = { 0 };
	//strcpy(buf2, "hello, you,world!\n");//ԭ�ַ������ȱ�	Ŀ���ַ����������������
	printf("buf = %s", buf2);
}

//2.s	strncpy �ַ�����������
void test02() {

	char buf[32] = { 0 };
	strncpy(buf, "hell,world!", 8);
	printf("buf = :%s\n", buf);

	char buf2[32] = { 0 };
	strncpy(buf2, "hell\0,world!", 8);//����\0��ǰ����
	printf("buf2 = :%s\n", buf2);
}

//03 strcat();�ַ���ƴ�Ӻ���
void test03() {

	char buff1[32] = "hello";
	char buff2[32] = "world";

	strcat(buff1, buff2);

	printf("buff1:%s\n", buff1);
	printf("buff2:%s\n", buff2);
}

//04 strncat();�ַ���ƴ�Ӻ���
void test04() {

	char buff1[32] = "hello";
	char buff2[32] = "world";

	strncat(buff1, buff2, 2);

	printf("buff1:%s\n", buff1);
	printf("buff2:%s\n", buff2);
}

//05strcmp();�ַ����ȽϺ���
void test05() {
	char buf1[] = "hello, world";
	printf("buf1 = %s", buf1);

	printf("������һ���ַ�����");

	char buf2[32] = { 0 };
	fgets(buf2, sizeof(buf2), stdin);

	//buf2�����\n , ��Ϊ��\0,
	buf2[strlen(buf2) - 1] = '\0';

	if (strcmp(buf1, buf2) == 0)
	{
		printf("buf1 = buf2\n");
	}
	else if (strcmp(buf1, buf2) == 1)
	{
		printf("buf1 > buf2\n");
	}
	else if (strcmp(buf1, buf2) == -1)
	{
		printf("buf1  < buf2\n");
	}
}

//06strncmp();�ַ����ȽϺ���
void test06() {
	char buf1[] = "hello,world";
	printf("buf1 = %s", buf1);

	printf("������һ���ַ�����");

	char buf2[32] = { 0 };
	fgets(buf2, sizeof(buf2), stdin);

	//buf2�����\n , ��Ϊ��\0,
	buf2[strlen(buf2) - 1] = '\0';

	if (strncmp(buf1, buf2,5) == 0)
	{
		printf("buf1 = buf2\n");
	}
	else if (strncmp(buf1, buf2, 5) == 1)
	{
		printf("buf1 > buf2\n");
	}
	else if (strncmp(buf1, buf2, 5) == -1)
	{
		printf("buf1  < buf2\n");
	}
}

//06�Ƚ�С����
void test07() {

	printf("������һ�����ڣ�spring, summer ,autumn,winter\n");

	char buf[32] = {0};
	fgets(buf,sizeof(buf),stdin);
	buf[sizeof(buf) - 1] = '\0';

	if (strncmp(buf,"spring",6)==0)
	{
		printf("����");
	}else if (strncmp(buf,"summer", 6)==0)
	{
		printf("����");
	}
	else if (strncmp(buf,"autumn", 6)==0)
	{
		printf("����");
	}
	else if (strncmp(buf,"winter", 6)==0)
	{
		printf("����");
	}
}
//sprinf ��ʽ���ַ���
void test08() {

	int year = 2021;
	int month = 05;
	int day = 04;

	char buf[32] = { 0 };
	sprintf(buf,"%d��%d��%d��",year,month,day);
	
	printf("buf = %s\n", buf);
}

// sscanf �ַ������
void  test09() {

	char msg[128] = "phone:136000000000;2021/05/04;�û�Ǯ��";

	long long phoneNumber = 0;
	int year = 0;
	int month = 0;
	int day = 0;
	char text[64] = { 0 };
	
	//sscanf(msg,"phone:%11d;%d/%d/%d;%s",&phoneNumber,&year,&month,&day,text);//text,������������൱���ǵ�ַ

	sscanf(msg,"phone:%11d;%d/%d/%d;%s",&phoneNumber,&year,&month,&day,text);

	printf("d11%\n",phoneNumber);
	printf("d%\n",year);
	printf("d%\n",month);
	printf("d%\n",day);
	printf("s%\n",text);

}

//strchr �ַ����� 
void test10() {

	char buf[32] = "luyuan@sina.con";
	char * ret = strchr(buf,'@');
	if (ret ==NULL)
	{
		printf("δ�ҵ�����@\n");
	}
	else
	{
		printf("�ҵ�@���ţ�λ����:%d",ret -buf);
	}

}

//strstr �ַ�������
void test11() {

	char * str = "abcdefg";
	char * ret =strstr(str,"de");

	if (ret =NULL)
	{
		printf("δ�ҵ��ַ���de\n");
	}
	else
	{
		printf("�ҵ��Ӵ���λ����:%d\n", ret - str);
	}

	printf("ret:%d\n", ret);
	printf("str:%d\n",str );
	

}

int main() {

	test11();
	
	system("pause");
	return EXIT_SUCCESS;
} 
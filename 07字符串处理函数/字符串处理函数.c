#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//1.s	strcpy 字符串拷贝函数
void test01() {

	char buf[32] = { 0 };

	//给字符数组进行赋值，
	//buf = "hello, world!";//错误写法，就想提一嘴，java中是可以的 String buff ； buff= “hellowm world”；
	strcpy(buf, "hello, world!\n");
	printf("buf = %s", buf);

	strcpy(buf, "hello\0world!\n");//拷贝是遇到\0会提前结束,字符串处理函数都有这个特性
	printf("buf = %s", buf);

	char buf2[10] = { 0 };
	//strcpy(buf2, "hello, you,world!\n");//原字符串长度比	目标字符串长，程序崩溃。
	printf("buf = %s", buf2);
}

//2.s	strncpy 字符串拷贝函数
void test02() {

	char buf[32] = { 0 };
	strncpy(buf, "hell,world!", 8);
	printf("buf = :%s\n", buf);

	char buf2[32] = { 0 };
	strncpy(buf2, "hell\0,world!", 8);//遇到\0提前结束
	printf("buf2 = :%s\n", buf2);
}

//03 strcat();字符串拼接函数
void test03() {

	char buff1[32] = "hello";
	char buff2[32] = "world";

	strcat(buff1, buff2);

	printf("buff1:%s\n", buff1);
	printf("buff2:%s\n", buff2);
}

//04 strncat();字符串拼接函数
void test04() {

	char buff1[32] = "hello";
	char buff2[32] = "world";

	strncat(buff1, buff2, 2);

	printf("buff1:%s\n", buff1);
	printf("buff2:%s\n", buff2);
}

//05strcmp();字符串比较函数
void test05() {
	char buf1[] = "hello, world";
	printf("buf1 = %s", buf1);

	printf("请输入一个字符串：");

	char buf2[32] = { 0 };
	fgets(buf2, sizeof(buf2), stdin);

	//buf2后会有\n , 改为，\0,
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

//06strncmp();字符串比较函数
void test06() {
	char buf1[] = "hello,world";
	printf("buf1 = %s", buf1);

	printf("请输入一个字符串：");

	char buf2[32] = { 0 };
	fgets(buf2, sizeof(buf2), stdin);

	//buf2后会有\n , 改为，\0,
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

//06比较小案例
void test07() {

	printf("请输入一个季节：spring, summer ,autumn,winter\n");

	char buf[32] = {0};
	fgets(buf,sizeof(buf),stdin);
	buf[sizeof(buf) - 1] = '\0';

	if (strncmp(buf,"spring",6)==0)
	{
		printf("春天");
	}else if (strncmp(buf,"summer", 6)==0)
	{
		printf("夏天");
	}
	else if (strncmp(buf,"autumn", 6)==0)
	{
		printf("秋天");
	}
	else if (strncmp(buf,"winter", 6)==0)
	{
		printf("冬天");
	}
}
//sprinf 格式化字符串
void test08() {

	int year = 2021;
	int month = 05;
	int day = 04;

	char buf[32] = { 0 };
	sprintf(buf,"%d年%d月%d日",year,month,day);
	
	printf("buf = %s\n", buf);
}

// sscanf 字符串拆分
void  test09() {

	char msg[128] = "phone:136000000000;2021/05/04;该还钱了";

	long long phoneNumber = 0;
	int year = 0;
	int month = 0;
	int day = 0;
	char text[64] = { 0 };
	
	//sscanf(msg,"phone:%11d;%d/%d/%d;%s",&phoneNumber,&year,&month,&day,text);//text,数组名本身就相当于是地址

	sscanf(msg,"phone:%11d;%d/%d/%d;%s",&phoneNumber,&year,&month,&day,text);

	printf("d11%\n",phoneNumber);
	printf("d%\n",year);
	printf("d%\n",month);
	printf("d%\n",day);
	printf("s%\n",text);

}

//strchr 字符查找 
void test10() {

	char buf[32] = "luyuan@sina.con";
	char * ret = strchr(buf,'@');
	if (ret ==NULL)
	{
		printf("未找到符号@\n");
	}
	else
	{
		printf("找到@符号，位置在:%d",ret -buf);
	}

}

//strstr 字符串查找
void test11() {

	char * str = "abcdefg";
	char * ret =strstr(str,"de");

	if (ret =NULL)
	{
		printf("未找到字符串de\n");
	}
	else
	{
		printf("找到子串，位置在:%d\n", ret - str);
	}

	printf("ret:%d\n", ret);
	printf("str:%d\n",str );	

}


//屏蔽禁语案例
void test12() {

	char buf[1024] = { 0 };
	fgets(buf, sizeof(buf),stdin);
	//将buf中\n改为\0,
	buf[strlen(buf) - 1] = '\0';

	char * p = buf;//创建临时指针遍历字符串信息。

	//while 查找字符串中出现目标字符的位置
	//while (1)
	//{
	//	//上单, 你真sb，sb，sb
	//	char * ret = strstr(p,"sb");
	//	if (ret !=NULL)
	//	{
	//		//找到禁语,替换
	//		strncpy(ret,"**",2);
	//		p = ret + 2;
	//	}
	//	else
	//	{
	//		break;
	//	}
	//}
	//printf("%s:\n",buf);

	//优化代码。
	char * ret =NULL;
	while (ret = strstr(p, "sb"))
	{
		strncpy(ret,"**",2);
		p = ret + 2;

	}
	printf("%s:\n", buf);

}


//字符串分割，strtok
void test13() {

	char buf[1024] = "张三:李四:王五:呵呵:哈哈哈";
	char *names[64] = { 0 };

	//char * name1 =strtok(buf,":");
	//printf("%s:\n", name1);
	//name1 = strtok(NULL,":");//从第二次分割，参数1开始填为 NULL ;
	//rintf("%s:\n", name1);


	//第一个分割
	int i = 0;	
	names[i] = strtok(buf, ":");

	//从第二次分割，参数1开始填为 NULL ;
	while (names[i] != NULL)
	{
		i++;
		names[i] =strtok(NULL,":");
	}

	//遍历names数组
	int j = 0;
	while (names[j]!=0)
	{
		printf("%s:\n", names[j++]);
	}
}

//13分割 代码优化：
void test14() {


	char buf[1024] = "张三:李四:王五:呵呵:哈哈哈";
	char *names[64] = { 0 };

	int i = 0;
	while ((names[i++] = strtok(names[i],":"))!=NULL){}

	//遍历names数组
	int j = 0;
	while (names[j] != 0)
	{
		printf("%s:\n", names[j++]);
	}
}

//void扩展
void test15(){


	char buf[1024] = "张三###skjj8**11!!!!!:hahahha,hahaha*****aaaaa哈哈哈";
	char *worlds[64] = {buf,NULL};

	int i = 0;
	while (      (worlds[i++] = strtok(worlds[i],"?:#*!"))!= NULL     ){}

	//遍历wowlds数组
	int j = 0;
	while (worlds[j] != 0)
	{
		printf("%s:\n", worlds[j++]);
	}
}

//atoi(); 字符转换，数字。类似的atol();atol();

void test16() {

	int num = 0;
	char buf[] = "123";

	num = atoi(buf);

	printf("%d:\n",num);

	//sscanf也可以坐到字符转数字//如果第一个，过滤失败，结束匹配，
	sscanf("1232aaa", "%*[a-z]%d", &num);
	printf("%d:\n", num);

	int a = 0;
	int b = 0;
	
	sscanf("1234 45678","%d %d",&a,&b);
		
	printf("a = %d\n",a);
	printf("b = %d\n",b);
}




int main() {

	test11();
	
	system("pause");
	return EXIT_SUCCESS;
} 



#include<stdio.h>


//������ͬ + 1 ֮����Ծ������ͬ
void test01() {

	char * p1 = NULL;
	printf("%d\n", p1);
	printf("%d\n", p1 + 1);

	int  * p2 = NULL;
	printf("%d\n", p2);
	printf("%d\n", p2 + 1);

	double *p3 = NULL;
	printf("%d\n", p3);
	printf("%d\n", p3 + 1);


}

//�����õ�ʱ��ȡ�����ֽ�����ͬ
void test02() {

	int num = 0x01020304;

	int * p = &num;

	printf("*P = %#x\n",*p);


	short * p2 = &num;

	printf("*P = %#x\n",*p2);

	char * p3 = &num;
	printf("*P = %#x", *p3);





}
int main() {


	test02();
	



	return 0;

}
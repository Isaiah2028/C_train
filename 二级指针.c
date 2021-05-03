#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//Êı×éÖ¸Õë
void test01() {
	int num = 10;
	int * p = &num;

	int **pp = &p;

	printf("&num = %d\n",&num);
	printf("p = %d\n",p);

	printf("*p = %d\n",*p);
	printf("num =%d\n",num);

	printf("&p= %d\n",&p);
	printf("**p= %d\n",pp);


	printf("*pp= %d\n",*pp);

	printf("*pp= %d\n",**pp);
	
}

int main() {

	test01();
	return 0;

}

#include<stdio.h>

test() {

	//ָ�������ָ���ַ���Ϊ0�ĵ�ַ
	int *p = NULL;

	//�����Է��ʿ�ָ��ָ�������
	//�ڴ��ַ���0-255֮�䱻ϵͳռ�ã����ɷ��ʡ�
	printf("%d\n", *p);
}


//Ұָ��
void test02() {

	//ָ��Ƿ��ĵ�ַ�ռ�
	int *p = 0xffffff;
	printf("%d\n", *p);

}
void test03() {

	//δ��ʼ����Ҳ����Ұָ��
	int *p ;
	printf("%d\n", *p);//vs�����д���

}

int main() {

	test();
	return 0;

}
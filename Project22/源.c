#include <stdio.h>

int main(void)
{
	int number = 100;
	int* A = &number;
	int** B = &A;

	printf("%d\n",**B);//number��ֵ
	printf("%p\n",B);//A�ĵ�ַ
	printf("%p\n",&B);//B�ĵ�ַ
	printf("%p\n",A);//number�ĵ�ַ
	printf("%p\n",&A);//A�ĵ�ַ

	return 0;
}
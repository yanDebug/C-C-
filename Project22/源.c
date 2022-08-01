#include <stdio.h>

int main(void)
{
	int number = 100;
	int* A = &number;
	int** B = &A;

	printf("%d\n",**B);//number的值
	printf("%p\n",B);//A的地址
	printf("%p\n",&B);//B的地址
	printf("%p\n",A);//number的地址
	printf("%p\n",&A);//A的地址

	return 0;
}
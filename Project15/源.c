#include <stdio.h>

int main(void)
{
	int sum,number_1, number_2;

	printf("输入第一个数number_1\n");
	scanf_s("%d",&number_1);

	printf("输入第二个数number_2\n");
	scanf_s("%d",&number_2);

	printf("乘积=%d", number_1 * number_2);

	return 0;

}
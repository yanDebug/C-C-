#include <stdio.h>
int main(void)
{
	int number;

	printf("Hello,World\n");

	scanf_s("%d",&number);
	//scanf��ʹ��Ҫ��s,scanf_s
	printf("number = %d\n",number);

	return 0;
}
//main ������
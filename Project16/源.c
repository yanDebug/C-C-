#include <stdio.h>

int sum(int number_1, int number_2);
//��������
int main(void)
{
	sum(20,30);
	sum(10,52);
	
	return 0;
}
//���庯��
int sum(int number_1, int number_2) {
	int a = number_1 + number_2;
	printf("a = %d\n", a);

	return a;
}
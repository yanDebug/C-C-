#include <stdio.h>

int main(void)
{
	int age = 20;

	if (age > 18) {
		printf("Hello");
	}
	if (age > 40) {
		printf("Hi");
	}
	if (age > 60) {
		printf("Good");
	}
	//else�����������û�б�ƥ���ifƥ��
	else {
		printf("Tom");
	}

	return 0;
}
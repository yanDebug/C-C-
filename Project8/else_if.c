#include <stdio.h>

int main(void)
{
	int age;
	printf("����������\n");
	scanf_s("%d",&age);

	if (age >= 90) {
		printf("A\n");
	}
	else if (age >= 60) {
		printf("B\n");
	}
	else if (age >= 40) {
		printf("C\n");
	}
	else {
		printf("����������");
	}
	
	return 0;
}

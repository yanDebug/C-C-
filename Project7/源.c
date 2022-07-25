#include <stdio.h>

int main(void)
{
	int age = 90;

	if (age >= 18) {
		printf("你还未成年\n");
		return 0;
	}
	if (age >= 70) {
		printf("老年");
		return 0;
	}
	if (age >= 50) {
		printf("中年");
		return 0;
	}
	if (age >= 30) {
		printf("年轻");
	}

	return 0;
}
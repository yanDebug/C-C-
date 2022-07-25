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
	//else跟距离它最近没有被匹配的if匹配
	else {
		printf("Tom");
	}

	return 0;
}
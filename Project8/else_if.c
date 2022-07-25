#include <stdio.h>

int main(void)
{
	int age;
	printf("请输入年龄\n");
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
		printf("不满足条件");
	}
	
	return 0;
}

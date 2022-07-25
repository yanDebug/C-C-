#include <stdio.h>

int main(void)
{
	unsigned age;

	printf("请输入数值\n");
	scanf_s("%3d",&age);

	switch (age) {
	case 10:
		printf("超人");
		break;

	case 20:
		printf("喜羊羊");
		break;

	case 30:
		printf("奥特曼");
		break;

	default:
		printf("输入错误\n");
		break;
	}

	return 0;
}

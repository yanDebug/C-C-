#include <stdio.h>

int main(void)
{
	unsigned age;

	printf("��������ֵ\n");
	scanf_s("%3d",&age);

	switch (age) {
	case 10:
		printf("����");
		break;

	case 20:
		printf("ϲ����");
		break;

	case 30:
		printf("������");
		break;

	default:
		printf("�������\n");
		break;
	}

	return 0;
}

#include <stdio.h>
#define GOLD 100

int main(void)
{
	int rush = 1;

	while (rush < GOLD) {
		if (rush == 50) {
			printf("��Ҫ50\n");
			rush += 1;
			continue;
		}
		printf("rush = %d\n",rush);
		rush += 1;
	}
	printf("���!\n");

	return 0;
}
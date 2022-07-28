#include <stdio.h>
#define GOLD 100

int main(void)
{
	int rush = 1;

	while (rush < GOLD) {
		if (rush == 50) {
			printf("不要50\n");
			rush += 1;
			continue;
		}
		printf("rush = %d\n",rush);
		rush += 1;
	}
	printf("完成!\n");

	return 0;
}
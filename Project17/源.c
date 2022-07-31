#include <stdio.h>

int main(void)
{
	unsigned plants[5] = { 10,20,30,40,50 };
	unsigned xxx[5] = { 2,3,4 };
	unsigned bus[5];

	bus[3] = 4;

	printf("plant --- %d\n", plants[0]);
	printf("plant --- %d\n", plants[1]);
	printf("plant --- %d\n", plants[3]);
	printf("plant --- %d\n", plants[4]);

	printf("xxx --- %d\n", xxx[4]);

	printf("bus --- %d\n",bus[3]);
	printf("bus --- %d\n",bus[2]);
	printf("bus --- %d\n",bus[4]);

	for (int i = 0; i < 5; i++) {
		printf("plants ---- %d\n", plants[i]);
	}

	return 0;
}
//下标值从0开始
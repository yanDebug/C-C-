#include <stdio.h>
#define G 100

int main(void)
{
	int a = 0;

	do {
		a++;
		printf("a = %d\n",a);
		printf("xxxxx\n");
	} while (a < G);
	printf("a = %d\n",a);

	return 0;
}
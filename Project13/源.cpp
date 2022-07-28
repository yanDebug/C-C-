#include <stdio.h>
#define G 100

int main(void)
{
	int a;

	for (a = 1; a < G; a++) {
		printf("a = %d\n,接着执行，直到a = %d\n",a,G);
	}
	printf("a = %d\n,完成\n",a);

	return 0;
}
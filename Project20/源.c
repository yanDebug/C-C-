#include <stdio.h>

int main(void)
{
	enum DAY {
		A = 1, B = 2
	};

	printf("%4d\n",A);
	printf("%4d\n",B);

	return 0;
}
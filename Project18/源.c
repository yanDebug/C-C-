#include <stdio.h>

int main(void)
{
	int A[5][6] = { {78,62,45,77,99,66},{80,100,60},{58,87,94,65,22,44},{65,87,54,34,34,43},{56,87,65,65,100,120} };
	int a, b;

	for (a = 0; a < 5;a++) {
		for (b = 0; b < 6; b++) {
			printf("%4d",A[a][b]);
		}
		printf("\n");
	}

	return 0;
}
#include <stdio.h>

int main(void)
{
	int row, column;

	for (row = 1; row <= 9; row++) {
		for (column = 1; column <= 9; column++) {
			printf("%d%d=%2d\t", row, column, row * column);
		}
		printf("\n");
	}

	return 0;
}
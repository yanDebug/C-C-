#include <stdio.h>
#define ONE_KILOMETER 1000

int main(void)
{
	int run;
	run = 0;

	while (run <= ONE_KILOMETER) {
		printf("running %d\n",run);
		run += 1;
	}

	printf("½áÊøÁË\n");

	return 0;
}
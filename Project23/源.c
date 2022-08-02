#include <stdio.h>

int exchange(int* number_1, int* number_2);

int main(void)
{
	int a = 3, b = 4;

	exchange(&a, &b);
	printf("a = %d\nb = %d\n",a,b);

}
int exchange(int* number_1, int* number_2) {
	int temp;
	temp = *number_1;
	*number_1 = *number_2;
	*number_2 = temp;
}
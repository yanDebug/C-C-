#include <stdio.h>
#include <stdbool.h>

int days_of_month(int month,int year);
bool is_leap(int year);

int main(void)
{
	printf("这个月一共%d天！\n",days_of_month(2,2020));

	return 0;
}
int days_of_month(int month,int year) {
	int is_leap_res = is_leap(year);
	int days[12] = {31,is_leap(year) ? 29 : 28,31,30,31,30,31,31,30,31,30,31};

	return days[month-1];
}
bool is_leap(int year) {
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return true;
	else
		return false;
}
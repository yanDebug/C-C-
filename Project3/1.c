#include <stdio.h>
int main(void)
{
	int number = 50;
	//number标识符，把50给number
	//在标识符中，C语言区分大小写
	//标识符只能以大小写字母和下划线_开头
	//不能包含标点字符，如@，*等
	//但是有列外，如*1
	float money1 = 60.9;
	double money2 = 60.9;

	printf("number = %d\n",number);
	//\n回车，%d十进制有符号整数
	printf("money1 = %f\n",money1);
	printf("money2 = %lf\n",money2);

	return 0;
}
#include <stdio.h>

int main(void)
{
	int LOL = 1005;
	
	int* BAI = NULL;//BAI为空指针
	
	int* NO;//野指针，程序随机分配，防止野指针产生
	
	int* L = &LOL;//L已经是LOL地址,和&LOL一样
	//输出LOL地址
	printf("%p\n",L);
	printf("%p\n",&LOL);
	//输出L地址
	printf("%p\n",&L);
	//输出指针L所指目标的数据
	printf("%d\n",*L);

	return 0;
}
#include <stdio.h>

int main(void)
{
	int LOL = 1005;
	
	int* BAI = NULL;//BAIΪ��ָ��
	
	int* NO;//Ұָ�룬����������䣬��ֹҰָ�����
	
	int* L = &LOL;//L�Ѿ���LOL��ַ,��&LOLһ��
	//���LOL��ַ
	printf("%p\n",L);
	printf("%p\n",&LOL);
	//���L��ַ
	printf("%p\n",&L);
	//���ָ��L��ָĿ�������
	printf("%d\n",*L);

	return 0;
}
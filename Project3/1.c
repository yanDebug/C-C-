#include <stdio.h>
int main(void)
{
	int number = 50;
	//number��ʶ������50��number
	//�ڱ�ʶ���У�C�������ִ�Сд
	//��ʶ��ֻ���Դ�Сд��ĸ���»���_��ͷ
	//���ܰ�������ַ�����@��*��
	//���������⣬��*1
	float money1 = 60.9;
	double money2 = 60.9;

	printf("number = %d\n",number);
	//\n�س���%dʮ�����з�������
	printf("money1 = %f\n",money1);
	printf("money2 = %lf\n",money2);

	return 0;
}
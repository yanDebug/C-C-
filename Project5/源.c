#include <stdio.h>

int main(void)
{
    int age;
    int english_score;
    int IQ;

    printf("Please input your age:\n");
    scanf_s("%d", &age);

    printf("Please input your english_score:\n");
    scanf_s("%d",&english_score);

    printf("Please input your IQ:\n");
    scanf_s("%d",&IQ);

    //����������������ִ��
    if ((age >= 18) && (english_score >= 90 || IQ >= 120)){
        //ע����������
        printf("���꣬������Ϸ\n");
    }
    else {
        printf("δ���꣬��������Ϸ\n");
    }

    return 0;
}
//�û��Ĳ��Ϸ�����
//����Ĳ��Ͻ�
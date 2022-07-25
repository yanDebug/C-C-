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

    //满足以下条件，则执行
    if ((age >= 18) && (english_score >= 90 || IQ >= 120)){
        //注意上行括号
        printf("成年，能玩游戏\n");
    }
    else {
        printf("未成年，不能玩游戏\n");
    }

    return 0;
}
//用户的不合法输入
//程序的不严谨
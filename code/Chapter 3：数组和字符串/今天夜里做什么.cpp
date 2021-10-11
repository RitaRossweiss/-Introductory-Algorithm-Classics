#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int ernie(){
    srand((unsigned) time(NULL));//时间种子
    return (rand()%10+1);//生成范围1-10的随机数
}

int main(){
    int eventNum = ernie();
    int balanceStart = 5;
    int balanceOver = 10;

    printf("今天夜里做点什么好呢？\n");
    printf("-------------------\n");
    
    if (eventNum > balanceStart && eventNum <= balanceOver )
    {
        switch (eventNum)
        {
        case 6:
            printf("今天夜里是自由活动，遵从你内心的选择");
            break;
        case 7:
            printf("今天夜里你应该去画画");
            break;
        case 8:
            printf("今天夜里是博客time，去吸收那些好的经验");
            break;
        case 9:
            printf("（//▽//）今天夜里该放松啦，打游戏去吧~");
            break;
        case 10:
            printf("今天夜里是开发time,看看书刷刷题，把精力投入到自己的项目中去吧");
            break;
        default:
            break;
        }
    }else{
        printf("（//▽//）今天至少要学习两个小时，加油啊");
    }

    printf("\n\n");
    system("pause");
    return 0;
}
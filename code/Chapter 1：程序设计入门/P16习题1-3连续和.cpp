// 输入正整数n，输出1＋2＋…＋n的值。提示：目标是解决问题，而不是练习编程。

#include<stdio.h>
//正常做法
int main(){
    int n;
    int sum = 0;
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
//当n这个数字太大时，更有效率的做法,高斯教过，大家都会。
// int main(){
//     int n;
//     int sum = 0;
//     scanf("%d",&n);
//     if (n%2==0)
//     {
//         sum = (1+n)*(n/2);
//     }else{
//         sum = (1+(n-1))*((n-1)/2)+n;
//     }
//     printf("%d",sum);
// }
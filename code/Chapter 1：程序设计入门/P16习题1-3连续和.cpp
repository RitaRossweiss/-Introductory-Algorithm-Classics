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
//当n这个数字太大时，更有效率的做法,高斯教的公式，大家都会。
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
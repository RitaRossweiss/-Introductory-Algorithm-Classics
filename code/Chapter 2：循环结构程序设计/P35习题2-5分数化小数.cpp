/**
 * 输入正整数a，b，c，输出a/b的小数形式，精确到小数点后c位。a，b≤106，c≤100。
 * 输入包含多组数据，结束标记为a＝b＝c＝0
 * 样例输入：
 * 1 6 4
 * 0 0 0
 * 样例输出：
 * Case 1: 0.1667
 */

//1.不使用输出格式去控制小数位数
#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,dec;
    int Case = 0;
    while (scanf("%d%d%d",&a,&b,&c)==3 && a && b && c)
    {
        printf("Case %d: %d.",++Case,a/b); //先打出整数位
        for (int i = 1; i < c; i++)
        {
            a*=10;
            dec = a/b;
            printf("%d",dec % 10); //打出中间的数字
        }
        dec = round(double(a)*10/b);
        printf("%d",dec % 10); //打出最后一位
    }
    return 0;
}

// 2.使用变量去控制小数位数, 但这种方法小数位较长时就不精确了，所以并不适用此题
// #include<stdio.h>
// int main(){
//     long long a,b;
//     int Kase = 0;  
//     int c;
//     while (scanf("%lld %lld %d",&a,&b,&c) == 3 && a && b && c)
//     {
//         printf("Case %d: %.*lf",++Kase,c,a*1.0/b); //注意这里的输出格式
//     }
//     return 0;
// }





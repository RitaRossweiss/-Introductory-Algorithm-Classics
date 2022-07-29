// 输入华氏温度f，输出对应的摄氏温度c，保留3位小数。提示：c＝5（f－32）/9。
#include<stdio.h>
int main(){
    double f;
    scanf("%lf",&f);
    printf("%0.3lf",5*(f-32)/9);
    return 0;
}
//这道题似乎没什么可说的。
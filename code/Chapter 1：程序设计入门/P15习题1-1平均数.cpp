#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    printf("%0.3lf",(a+b+c)/3);
    return 0;
}

/*
对于double类型
printf使%f和%lf都可以，没有区别
scanf要使用%lf

对于float类型
printf和scanf都用%f
*/
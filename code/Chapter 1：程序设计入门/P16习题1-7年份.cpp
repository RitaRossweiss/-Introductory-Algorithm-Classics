
// 输入年份，判断是否为闰年。如果是，则输出yes，否则输出no。

#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    //这道题可太经典了，都应该做过。闰年的判断条件：四年一闰，百年不闰，四百年再闰：
    //能被4整除，并且不能被100整除;
    //能被400整除。
    if (year%4==0 && year%100!=0 || year%400==0)
    {
        printf("yes");
    }else{
        printf("No");
    }
    return 0;
    
}
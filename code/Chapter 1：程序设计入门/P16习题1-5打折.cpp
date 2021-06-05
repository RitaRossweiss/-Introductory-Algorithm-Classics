#include<stdio.h>
int main(){
    double unitPrice = 95; //衣服单价
    int quantity; //购买数量
    double sum; //总价
    scanf("%d",&quantity);
    sum = unitPrice*quantity;
    if (sum >= 300)
    {
        printf("%0.2lf",sum*0.85);
    }else{
        printf("%0.2lf",sum);
    }
    
    return 0;
}
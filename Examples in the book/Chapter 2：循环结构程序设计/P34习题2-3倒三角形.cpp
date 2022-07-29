/**
 * 输入正整数n≤20，输出一个n层的倒三角形。例如，n＝5时输出如下：
 * ######### 
 *  ####### 
 *   #####
 *    ###
 *     #
 * 图形题很多都是要找到下标规律才好解决
 */

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int j = 0; j < n; j++) //y轴
    {
        for (int k = 0; k < n*2-1; k++) //x轴
        {
            if (k<j) 
            {
                printf("*");
            }else if (k>(2*n-j-2)) //关键
            {
                printf("*");
            }else{
                printf("#");
            }
        }
        printf("\n");
    }
    
    return 0;
}
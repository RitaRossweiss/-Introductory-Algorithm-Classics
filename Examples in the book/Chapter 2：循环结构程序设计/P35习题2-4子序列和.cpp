#include<stdio.h>
int main(){
    long long n,m; //防止数据类型溢出
    int kase = 0; //输出序号计数器
    while (scanf("%lld%lld",&n,&m) == 2 && n && m) //结束标记
    {
        double sum = 0;
        while (n<=m)
        {
            sum += 1/(1.0*n*n);//这里出现的魔法值1.0是为了让数据类型转换
            n++;
        }
        printf("Case %d:%0.5lf\n",++kase,sum);
    }
    return 0;
}

//这道解看似能解决，实际上仍然不够完美，在题目中几组输入数据中间可能有一个回车符，如果这样的情况切实存在，就要考虑程序的鲁棒性？
#include<cstdio>
using namespace std;
int main()
{
    short int t,n,s,v,p;
    long long int i_profit,max_profit;
    scanf("%hd",&t);
    while(t--)
    {
        max_profit=0;
        scanf("%hd",&n);
        while(n--)
        {
            scanf("%hd%hd%hd",&s,&p,&v);
            i_profit=(p/(s+1))*v;
            if(i_profit>max_profit)
                max_profit=i_profit;
        }
        printf("%lld\n",max_profit);
    }
    return 0;
}
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,c,x,y,p,sum0=0,sum1=0;
    scanf("%d%d%d",&n,&m,&c);
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d",&x,&y,&p);
        if(y-(m*x)-c>0)
            sum0+=p;
        else
            sum1+=p;   
    }
    printf("%d\n",max(sum0,sum1));
    return 0;
}
#include<cstdio>
#include<math.h>
using  namespace std;
int main()
{
    int t,n,k,ai,ans;
    unsigned long long sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d%d",&n,&k);
        for (int  i = 0; i < n; i++)
        {
            scanf("%d",&ai);
            sum+=ai;
        } 
        ans=sum%k;
        printf("%d\n",ans);    
    }
}
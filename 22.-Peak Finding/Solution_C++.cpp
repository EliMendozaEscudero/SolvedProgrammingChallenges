#include<cstdio>
using namespace std;
int main()
{
    int t,n,ni,ans;
    scanf("%d",&t);
    while (t--)
    {
        ans=0;
        scanf("%d",&n);
        while(n--)
        {
            scanf("%d",&ni);
            if(ni>ans)
                ans=ni;
        }
        printf("%d\n",ans);
    }
    return 0;
}
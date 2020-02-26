#include<cstdio>
using namespace std;
int main()
{
    int t,n,ai,count0,count2,ans;
    scanf("%d",&t);
    while(t--)
    {
        count0=0;count2=0;
        scanf("%d",&n);
        while (n--)
        {
            scanf("%d",&ai);
            if(ai==0)
                count0++;
            else if(ai==2)
                count2++;
        }
        ans=(count0*(count0-1))/2+(count2*(count2-1))/2;
        printf("%d\n",ans);
        
    }
    return 0;
}
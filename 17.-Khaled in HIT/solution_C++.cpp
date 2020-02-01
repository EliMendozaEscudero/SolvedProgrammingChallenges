#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,s,x,y,z;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d",&n);
        int ni[n];
        for (int i = 0; i < n; i++)
            scanf("%d",&ni[i]);
        s=sizeof(ni)/sizeof(ni[0]);
        sort(ni,ni+s);
        s=n/4;
        if(ni[s]!=ni[s-1] && ni[2*s]!=ni[2*s-1] && ni[3*s-1]!=ni[3*s])
        {
            x=ni[s];
            y=ni[2*s];
            z=ni[3*s];
            printf("%d %d %d\n",x,y,z);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
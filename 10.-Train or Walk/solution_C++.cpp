#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int t,n,a,b,c,d,p,q,y,tt,tw;
    scanf("%d",&t);
    while (t--)
    {
        tt=0;tw=0;
        scanf("%d%d%d%d%d%d%d%d",&n,&a,&b,&c,&d,&p,&q,&y);
        int x[n];
        for (int i = 0; i < n; i++)
              scanf("%d",&x[i]);
          
        tw=abs(x[b-1]-x[a-1])*p;
        if(abs(x[c-1]-x[a-1])*p<=y)
        {
            tt=y+abs(x[d-1]-x[c-1])*q+abs(x[b-1]-x[d-1])*p;
            if(tt<=tw)
                printf("%d\n",tt);
            else
                printf("%d\n",tw);   
        }
        else
            printf("%d\n",tw);
    }
    return 0;
}
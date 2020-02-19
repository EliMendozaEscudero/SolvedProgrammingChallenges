#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int t,a,b,c,d,s1,s2,p1,p2;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        if(c==d)
        {
            if(a==b)
                printf("YES\n");
            else 
                printf("NO\n");
            continue;
        }
        if((a-b)%(int)abs(c-d)==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

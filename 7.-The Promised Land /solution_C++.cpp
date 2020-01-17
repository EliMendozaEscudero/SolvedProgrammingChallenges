#include<cstdio>
using namespace std;
int main()
{
    int t,n,m,x,y,s;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&n,&m,&x,&y,&s);
        int a,l=0,sh=0,sv=0;
        for (int i = 0; i < x; i++)
        {
            scanf("%d",&a);
            sv+=(a-l-1)/s;
            l=a;
        }
        sv+=(n-l)/s;
        l=0;
        for (int i = 0; i < y; i++)
        { 
            scanf("%d",&a);
            sh+=(a-l-1)/s;
            l=a;
        }
        sh+=(m-l)/s;
        printf("%d\n",sv*sh);
    }
    return 0;
}
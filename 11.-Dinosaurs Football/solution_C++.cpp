#include<cstdio>
#include <string.h>
using namespace std;
int main()
{
    int t,n,k,h;
    scanf("%d",&t);
    while (t--)
    {
        scanf("%d%d",&n,&k);
        int d[n];
        for (int i =1; i <=n; i++)
            d[i-1]=i;
        if(k!=0)
        {
            k++;
            for (int i = 0; i <k; i++)
            {
                h=d[i];
                d[i]=d[n-k+i];
                d[n-k+i]=h;
            }
        }
        else
            for (int i = 0; i < n/2; i++)
            {
                h=d[i];
                d[i]=d[n-i-1];
                d[n-i-1]=h;
            }     
        for (int i = 0; i < n; i++)
            printf("%d ",d[i]);   
        if(n!=0)printf("\n");
    }
    return 0;
}
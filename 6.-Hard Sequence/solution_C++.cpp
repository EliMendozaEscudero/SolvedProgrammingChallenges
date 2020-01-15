#include<cstdio>
using namespace std;
int main()
{
    int t,n,a[128],x,count;
    scanf("%d",&t);
    while(t>0)
    {
        scanf("%d",&n);
        a[0] = 0;
        count=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i-1; j >=-1; j--)
            {
                if(a[j]==a[i])
                {
                    a[i+1] = i-j;
                    break;
                }
                if(j==0)
                {
                    a[i+1] = 0;
                    break;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==a[n-1])
                count++;
        }
        printf("%d ",count);
        t--;
    }
    return 0;
}
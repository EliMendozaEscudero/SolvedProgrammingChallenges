#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int t,n;
    unsigned long long ans;
    scanf("%d",&t);
    while (t--)
    {
        ans=0;
        scanf("%d",&n);
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
            scanf("%d",&a[i]);
        for (int i = 0; i < n; i++)
            scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        for (int i = 0; i < n; i++)
            ans+=min(a[i],b[i]);
        printf("%llu\n",ans);   
    }
    return 0;
}
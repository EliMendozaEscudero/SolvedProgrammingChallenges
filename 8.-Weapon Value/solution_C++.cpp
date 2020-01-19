#include<cstdio>
using namespace std;
int main()
{
    int t,n,count;
    char sj[10];
    scanf("%d",&t);
    while(t--)
    {
        int s[10]={0};
        scanf("%d",&n);
        while (n--)
        {     
            scanf("%s",sj);
            for (int j = 0; j < 10; j++)
                s[j]^=sj[j]-'0';
        }
        count=0;
        for (int i = 0; i < 10; i++)
            if(s[i])
                count++;

        printf("%d\n",count);
    }
    return 0;
}
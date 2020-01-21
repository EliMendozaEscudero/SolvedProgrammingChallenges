#include<cstdio>
using namespace std;
int main()
{
    int t,sa,sb,pa,pb,len;
    bool safe;
    scanf("%d",&t);
    while (t--)
    {
        safe=true;
        char s[100000]={'n'};
        scanf("%s",s);
        scanf("%d%d",&sa,&sb);
        for (int i = 0; i < 100000; i++)
        {
            if(s[i]=='A')
                pa=i;
            else if (s[i]=='B')
                pb=i;
            else if(s[i]!='.')
            {
                len=i+1;
                break;
            }
        }
        while(pb>0 && pa<len) 
        {
            pa+=sa;
            pb-=sb;
            if(pa==pb)
            {
                safe=false;
                break;
            }
        }
        if(safe)
            printf("%s","safe\n");
        else
            printf("%s","unsafe\n");
    }
    
    return 0;
}
#include<cstdio>
#include<ctype.h>
using namespace std;
int main()
{
    int t,h,hp;
    char n[10];
    scanf("%d",&t);
    while (t--)
    {
        h=0;hp=0;
        scanf("%s",n);
        for (int i = 0; i < 9; i++)
            if(isdigit(n[i]))
            {
                if(n[i]-'0'>n[i+1]-'0')
                {
                    hp=i;
                    h=n[i]-'0';
                    break;
                }
            }
            else
                break;
        for (int i = hp; i < 10; i++)
            n[i]=n[i+1];
        sscanf(n,"%d",&h);
        printf("%d\n",h);    
    }
    return 0;
}
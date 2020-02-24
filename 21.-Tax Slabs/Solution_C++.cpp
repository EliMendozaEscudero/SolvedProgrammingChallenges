#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    int t,lev,i, inc;
    float sum;
    scanf("%d",&t);
    while(t--)
    {
        sum=0;
        scanf("%d",&inc);
        lev=inc/250000;
        if(lev<6)
        {
            for (i = 0; i <lev; i++)
                sum+=250000*(1-(.05*i));
            sum+=(inc%250000)*(1-(.05*i));
        }
        else
        {
            for (i = 0; i <6; i++)
                sum+=250000*(1-(.05*i));
            sum+=(inc-1500000)*.7;
        }
        printf("%d\n",(int)sum);
    }
    return 0;
}
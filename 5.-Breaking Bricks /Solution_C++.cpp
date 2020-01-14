#include<cstdio>
using namespace std;
int main()
{
    int t,s,w[3];
    scanf("%d",&t);
    while (t>0)
    {
        scanf("%d",&s);
        for (int i = 0; i < 3; i++)
        {
            scanf("%d",&w[i]);
        }

        if(s>=w[0]+w[1]+w[2])
        {
            printf("%d\n",1);
        }
        else if(s>=w[0]+w[1] || s>=w[1]+w[2])
        {
            printf("%d\n",2);
        }
        else
        {
            printf("%d\n",3);
        }
        
        t--;
    }
    return 0;
}
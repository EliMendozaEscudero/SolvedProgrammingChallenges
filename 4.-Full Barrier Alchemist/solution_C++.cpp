#include <cstdio>
using namespace std;
int main(){
    unsigned short int n,h,y1,y2,l,xi;
    unsigned char t,ti;
    bool dead;
    scanf("%hhu",&t);
    for (int i = 0; i < t; i++)//TC
    {
        scanf("%hu%hu%hu%hu%hu",&n,&h,&y1,&y2,&l);
        dead=false;
        for (int j = 0; j < n; j++)//lines
        {
            scanf("%hhu%hu",&ti,&xi);
            if (ti==1 && !dead)
            {
                if (h-y1>xi)
                {
                    l--;
                    if(l==0)
                    {
                        printf("%d\n",j);
                        dead=true;
                    }
                }
            }else if (ti==2 && !dead)
            {
                if (y2<xi)
                {
                    l--;
                    if(l==0)
                    {
                        printf("%d\n",j);
                        dead=true;
                    }
                }
                
            }
            
        }
        if(!dead)
        {
            printf("%hu\n",n);
        }
    }
    return 0;
}
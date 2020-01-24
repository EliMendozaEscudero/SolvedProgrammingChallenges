#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
    float t,finish,distancetoBolth,tigerAccerleration,boltSpeed,tb,tt;
    scanf("%f",&t);
    while (t--)
    {
        scanf("%f%f%f%f",&finish,&distancetoBolth,&tigerAccerleration,&boltSpeed);
        tb=finish/boltSpeed;
        tt=sqrt(2*(finish+distancetoBolth)/tigerAccerleration);
        if(tb<tt)
            printf("Bolt\n");
        else 
            printf("Tiger\n");
    }
   return 0; 
}
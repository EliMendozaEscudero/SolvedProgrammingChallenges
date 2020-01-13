#include<cstdio>
using namespace std;
int main()
{
    int hFactor = 1,count=1;
    unsigned long int num=600851475143;
    for (unsigned long int i = 2; i < 600851475143; i++)
    {
        while(num%i==0)
        {
            num/=i;
            hFactor=i;
        }
        if(num==1)
        {
            break;
        }
    }
    
    printf("%d \n",hFactor);
    return 0;
}

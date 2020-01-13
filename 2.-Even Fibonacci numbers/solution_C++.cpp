#include<cstdio>
using namespace std;
int main()
{
    int hNum,fNum=1,sNum=1;
    unsigned int sum=0;;
    while(sNum<4000000)
    {  
        if((sNum & 1)==0) 
        sum+=sNum;
        hNum=fNum+sNum;
        fNum=sNum;
        sNum=hNum; 
    }
    printf("%d \n",sum);
    return 0;
}
#include<cstdio>
using namespace std;
int main()
{
	int zs=0,ns=0,len;
	char c;
	scanf("%i",&len);
	do{
		scanf("%c",&c);
		if(c=='z')
			zs++;
		else if(c=='n')
			ns++;
	}while(len--);
	
	for(int i=ns;i>0;i--)
		printf("1 ");
	for(int i=zs;i>0;i--)
		printf("0 ");
}

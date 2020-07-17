#include<cstdio>
using namespace std;
int main()
{
	int x=0,n;
	char sen[4];
	scanf("%i",&n);
	while(n--)
	{
		scanf("%s",sen);
		if(sen[1]=='-')
			x--;
		else
			x++;
	}
	printf("%i\n",x);
}

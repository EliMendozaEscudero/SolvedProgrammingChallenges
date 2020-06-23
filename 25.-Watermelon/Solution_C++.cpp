#include <cstdio>
using namespace std;
int main()
{
	int w;
	scanf("%d",&w);
	if(!(w&1) && w>2)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
	return 0;
}

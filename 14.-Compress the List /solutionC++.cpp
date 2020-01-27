#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
   int t,n,ni,nbi,count;
    string s;
    scanf("%d",&t);
    while (t--)
    {
       nbi=-1;
       count=0;
       s="";
       scanf("%d",&n); 
       for (int i = 0; i <= n; i++)
       {
           if(i!=n)
               scanf("%d",&ni);
            else 
                ni=nbi+2;
           if(ni!=nbi+1 && i!=0)
           {
                if(count>2)
                    s+=to_string(nbi-count+1)+"..."+to_string(nbi); 
                else if(count==2)
                    s+=to_string(nbi-1)+","+to_string(nbi);
                else
                    s+=to_string(nbi);  
               count=0;
               s+=",";  
           }
           count++;
           nbi=ni;
       }
       s.pop_back();
       cout<<s<<endl;   
    }
    return 0;
}
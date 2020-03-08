#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,tcount,fcount,ans;
    string wi,lwi;
    bool si;
    vector<pair<string,bool>> ws;
    cin>>t;
    while(t--)
    {   
        cin>>n;
        while (n--)
        {
            cin>>wi;cin>>si;
            ws.push_back(make_pair(wi,si));
        }
        sort(ws.begin(),ws.end());
        ans=tcount=fcount=0;
        for (vector<pair<string,bool>>::iterator i = ws.begin(); i < ws.end(); i++)
        {
            if(i!=ws.begin())
            {
                if(i->first.compare(lwi)!=0)
                {
                    ans+=max(tcount,fcount);
                    tcount=fcount=0;
                }
            }         
            if(i->second)
                tcount++;
            else
                fcount++;
            lwi=i->first;
        }
        ans+=max(tcount,fcount);
        cout<<ans<<endl;
        ws.clear();
    }
    return 0;
}
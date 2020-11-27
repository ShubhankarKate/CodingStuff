#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,i1,n,m,p,x,k,c,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>p;
            f = f + p;
        }
        if(f==m)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

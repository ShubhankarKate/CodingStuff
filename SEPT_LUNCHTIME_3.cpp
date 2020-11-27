#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n,u,v,k1,k2;
    cin>>t;
    while(t--)
    {
        k1=k2=0;
        cin>>n;
        for(i=0;i<n-1;i++)
        {
            cin>>u>>v;
            if(u == 1)
            {
                k1++;
            }
            if(v == 1)
            {
                k2++;
            }
        }
        if(k2 == 0 || k2 == 1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<k2-1<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n,k,l,s1,s2;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>l;
        s1 = n%k;
        s2 = n/k;
        if(k==1 && n>1)
        {
            cout<<"-1"<<endl;
        }
        else if(l*k < n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0;i<s2;i++)
            {
                for(j=1;j<=k;j++)
                {
                    cout<<j<<" ";
                }
            }
            for(i=0;i<s1;i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }
}

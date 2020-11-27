#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll multiply(ll n,ll y,ll k)
{
    ll r=10;
    for(int i=0;i<(y-1);i++)
    {
        r = ((r%k)*9)%k;
    }
    return ((r%k)*(y%k))%k;
}
int main()
{
    ll a,n,t,i,k=998244353;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=n;i>=1;i--)
        {
            cout<<multiply(n,i,k)<<" ";
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    long long r = 1;
    for(int i=1;i<=n;i++)
    {
        r = r*i;
    }
    return r;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1,n,m,p,x,k,f;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        k = fact(n);
        //cout<<k<<endl;
        f = (2 * k) / (n*n);
        cout<<f<<endl;
    }
}

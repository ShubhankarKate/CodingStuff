#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,n,m,p,x,k,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k = fact(n);
        //cout<<k<<endl;
        f = (2 * k) / (n*n);
        cout<<f<<endl;
    }
}

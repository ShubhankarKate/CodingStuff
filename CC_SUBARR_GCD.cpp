#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,n,g;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        cin>>a[0];
        g=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            g = __gcd(g,a[i]);
        }
        if(g==1)
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

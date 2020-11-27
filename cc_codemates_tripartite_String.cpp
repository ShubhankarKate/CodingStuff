#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,j,i,n,l,fin,r;
    cin>>t;
    while(t--)
    {
        cin>>n;
        fin=l=1;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            fin = (fin*a[i])/__gcd(fin, a[i]);
        }
        cin>>r;
        cout<<fin+r<<endl;
    }
}

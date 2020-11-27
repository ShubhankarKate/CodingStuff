#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,t1,i,n,s,k,fin,f1,f2;
    cin>>t;
    t1=t;
    while(t--)
    {
        cin>>n>>k>>s;
        f1 = f2 = k-1;
        f1 = f1 + 1 + n;
        f2 = f2 + (k-s) + (n-s+1);
        //cout<<f1<<" "<<f2<<endl;
        fin = min(f1,f2);
        cout<<"Case #"<<(t1-t)<<": "<<fin<<endl;
    }
}

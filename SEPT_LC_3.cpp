#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,s,f,f1,k1;
    double k,d;
    cin>>t;
    while(t--)
    {
        f1=k1=k=0;
        cin>>n;
        s = (n*(n+1))/2;
        if(s%2==0)
        {
            k = (sqrt(4*s+1)-1)/2;
            k1 = (long long)floor(k);
            d = k-k1;
            if(d==0)
            {
                f1= (k1*(k1-1)+(n-k1)*(n-k1-1))/2;
            }
            f1=f1+n-k1;
        }
        cout<<f1<<endl;
    }
}

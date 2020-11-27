#include<bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
    return (n*(n+1))/2;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,s,f1,k,k1,z1,z2,z3;
    double d;
    cin>>k;
    cin>>t;
    while(t--)
    {
        f1=k1=k=0;
        cin>>n;
        s = sum(n);
        k = (sqrt(4*s+1)-1)/2;
        k1 = (long long)floor(k);
        d = k-k1;
        if(d==0)
        {
            f1= k1;
        }
        else
        {
            z1 = abs(sum(k1)-s/2);
            z2 = abs(sum(k1+1)-s/2);
            z3 = abs(sum(k1-1)-s/2);
            if(z1<=z2 && z1<=z3)
            {
                f1=k1;
            }
            else if(z2<=z1 && z2<=z3)
            {
                f1=k1+1;
            }
            else
            {
                f1=k1-1;
            }
        }
        cout<<f1<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long n,long long k)
{
    long long calc;
    if( n == 0)
    {
        return 1;
    }
    calc = power(a, n/2, k);
    if (n%2 == 0)
        return ( (calc%k) * (calc%k) )%k;
    else
        return ( ( ( (a%k) * (calc%k) ) % k ) * ( calc % k ) )%k;
}
int main()
{
	long long t,i,n,k=1e9 + 7,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=1;i<n;i++)
        {
            cout<<power(2,n-i,k)<<" ";
        }
    }
}

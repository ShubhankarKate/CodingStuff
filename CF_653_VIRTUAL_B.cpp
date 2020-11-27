#include<bits/stdc++.h>
using namespace std;
long long power_calc(long long n,long long p)
{
    long long pw = 0;
    int flag = 0;
    while(flag == 0)
    {
        if(n%p == 0)
        {
            pw++;
            n = n/p;
        }
        else
        {
            flag = 1;
        }
    }
    return pw;
}
int main()
{
	long long t,n,z,p2,p3,mp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        p2 = power_calc(n,2);
        p3 = power_calc(n,3);
        z = pow(2,p2) * pow(3,p3);
        if(z == n)
        {
            if(p2 > p3)
            {
                cout<<"-1"<<endl;
            }
            else
            {
                cout<<(p2 + (p3-p2)*2)<<endl;
            }
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

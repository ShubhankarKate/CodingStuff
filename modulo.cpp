#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 99;
    long long a1 = 1;
    long long a2 = 1;
    long long k = 1000000007;
    for(int i=1;i<=n;i++)
    {
        if(i<=23)
        {
            a1 = ((a1%k)*(i%k))%k;
        }
        a2 = ((a2%k)*(i%k))%k;
    }
    long long f = (a1*a2)%k;
    //cout<<a1<<endl;
    //cout<<a2<<endl;
    cout<<f<<endl;
}

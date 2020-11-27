#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,d,k;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        d = abs(b-a);
        k = d%10==0? (d/10):(d/10)+1;
        cout<<k<<endl;
    }
}

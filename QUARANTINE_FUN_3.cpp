#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,k1,k2,k3,i,money,flag=100000007,k;
	long double a,b,c,m,p;
    cin>>t;
    while(t--)
    {
        money=0,k=1;
        cin>>a>>b>>c>>m>>p;
        k1=pow(a,b);
        k2=pow(k1,c);
        k3=k2%(long long)m;
        money = k3*p;
        if(((long long)money)%flag > 0)
        {
            cout<<"YES "<<money<<endl;
        }
        else
        {
            cout<<"NO 0"<<endl;
        }
    }
}

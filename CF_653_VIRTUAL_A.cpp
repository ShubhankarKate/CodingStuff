#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,x,y,d;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>n;
        d = n/x;
        if((d*x) + y <= n)
        {
            cout<<(d*x + y)<<endl;
        }
        else
        {
            if(d*x - x + y < 0)
            {
                cout<<"0"<<endl;
            }
            else
            {
                cout<<(d*x - x + y)<<endl;
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,x,y,z,a,b,c,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>x>>y>>z;
        if(x==y && y==z)
        {
            a=b=c=x;
        }
        else if(x==y)
        {
            if(z>x)
            {
                cout<<"NO"<<endl;
                flag=1;
            }
            else
            {
                a=x;
                b=c=z;
            }
        }
        else if(z==y)
        {
            if(x>z)
            {
                cout<<"NO"<<endl;
                flag=1;
            }
            else
            {
                a=z;
                b=c=x;
            }
        }
        else if(x==z)
        {
            if(y>x)
            {
                cout<<"NO"<<endl;
                flag=1;
            }
            else
            {
                a=x;
                b=c=y;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            flag=1;
        }
        if(flag == 0)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}

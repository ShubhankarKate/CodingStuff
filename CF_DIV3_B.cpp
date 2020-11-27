#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,a,b,x,y,n,d1,d2,k1,k2,m,a1,b1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>x>>y>>n;
        a1=a;
        b1=b;
        k1=a-x;
        k2=b-y;
        if(k2>n)
        {
            b1=b1-n;
        }
        else if(k2==n)
        {
            b1=y;
        }
        else
        {
            b1=y;
            if(k1<=(n-k2))
            {
                a1=x;
            }
            else
            {
                a1 = a1-(n-k2);
            }
        }
        d1=a1*b1;
        if(k1>n)
        {
            a=a-n;
        }
        else if(k1==n)
        {
            a=x;
        }
        else
        {
            a=x;
            if(k2<=(n-k1))
            {
                b=y;
            }
            else
            {
                b = b-(n-k1);
            }
        }
        d2=b*a;
        /*if(a>=b)
        {
            if(k2>n)
            {
                b=b-n;
            }
            else if(k2==n)
            {
                b=y;
            }
            else
            {
                b=y;
                if(k1<=(n-k2))
                {
                    a=x;
                }
                else
                {
                    a = a-(n-k2);
                }
            }
        }
        else
        {
            if(k1>n)
            {
                a=a-n;
            }
            else if(k1==n)
            {
                a=x;
            }
            else
            {
                a=x;
                if(k2<=(n-k1))
                {
                    b=y;
                }
                else
                {
                    b = b-(n-k1);
                }
            }
        }*/
        //cout<<a<<" "<<b<<endl;
        cout<<min(d1,d2)<<endl;
    }
}

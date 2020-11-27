#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,n,f,p1,p2;
    cin>>t;
    while(t--)
    {
        p1=0,p2=0;
        cin>>n;
        f = (n%2 == 0)? 0:1;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        if(n==1)
        {
            p1=a[0];
            p2=0;
        }
        else if(n==2)
        {
            p1=a[1];
            p2=a[0];
        }
        else if(n>=3)
        {
            p1 = a[n-1];
            p2 = a[n-2] + a[n-3];
            for(i=n-4;i>=0;i--)
            {
                if(f==0)
                {
                    if(i%2 == 0)
                    {
                        p1 = p1 + a[i];
                    }
                    else
                    {
                        p2 = p2 + a[i];
                    }
                }
                else
                {
                    if(i%2 == 1)
                    {
                        p1 = p1 + a[i];
                    }
                    else
                    {
                        p2 = p2 + a[i];
                    }
                }
            }
        }

        if(p1>p2)
        {
            cout<<"first"<<endl;
        }
        else if(p1 == p2)
        {
            cout<<"draw"<<endl;
        }
        else if(p1 < p2)
        {
            cout<<"second"<<endl;
        }
    }
}

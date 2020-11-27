#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,g,i,n,q,h,ta;
	cin>>t;
    while(t--)
    {
        cin>>g;
        while(g--)
        {
            cin>>i>>n>>q;
            if(n%2==1)
            {
                if(i==1)
                {
                    h=n/2;
                    ta=h+1;
                    if(q==1)
                    {
                        cout<<h<<endl;
                    }
                    else if(q==2)
                    {
                        cout<<ta<<endl;
                    }
                }
                else if (i==2)
                {
                    ta=n/2;
                    h=ta+1;
                    if(q==1)
                    {
                        cout<<h<<endl;
                    }
                    else if(q==2)
                    {
                        cout<<ta<<endl;
                    }
                }
            }
            else
            {
                h=ta=n/2;
                cout<<h<<endl;
            }
        }
    }
}

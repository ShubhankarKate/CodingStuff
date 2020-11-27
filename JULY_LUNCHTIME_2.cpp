#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,m,x,y,res,maxi,mini;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y;
        if(x<y)
        {
            if( y >= (2*x) )
            {
                maxi = (2*x);
                mini = x;
            }
            else
            {
                maxi = y;
                mini = x;
            }
        }
        else
        {
            maxi = y;
            mini = y;
        }
        if(n*m == 1)
        {
            res = x;
        }
        else
        {
            if((n*m)%2 == 0)
            {
                res = ((n*m)/2)*maxi;
            }
            else
            {
                res = (((n*m)/2)*maxi) + mini;
            }
        }
        cout<<res<<endl;
    }
}

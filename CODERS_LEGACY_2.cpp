#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,q,i,result;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cin>>q;
        long long x,y;
        while(q--)
        {
            result=0;
            cin>>x>>y;
            if(binary_search(a,a+n,x+y))
            {
                result = -1;
            }
            else
            {
                result = lower_bound(a,a+n,x+y)-a;
            }
            cout<<result<<endl;
        }
    }
}
/*if(x > a[n-1] || y > a[n-1])
            {
                result = n;
            }
            else
            {
                for(i=0;i<n;i++)
                {
                    if(x+y == a[i])
                    {
                        result = -1;
                    }
                    else if(x+y >= a[i] && x+y <= a[i+1])
                    {
                        result = i+1;
                    }
                }
            }*/

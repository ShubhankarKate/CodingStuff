#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,n,r,flag,amin,bmin;
    cin>>t;
    while(t--)
    {
        flag=0,r=0;
        cin>>n;
        long long a[n],b[n];
        cin>>a[0];
        amin = a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            amin = min(a[i],amin);
        }
        cin>>b[0];
        bmin = b[0];
        for(i=1;i<n;i++)
        {
            cin>>b[i];
            bmin = min(b[i],bmin);
        }
        for(i=0;i<n;i++)
        {
            if( a[i] - amin >= 0 && b[i] - bmin >= 0 )
            {
                r = r + max((a[i] - amin), (b[i] - bmin));
            }
        }
        cout<<r<<endl;
    }
}

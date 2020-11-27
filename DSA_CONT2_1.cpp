#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,mx,i;
    cin>>t;
    while(t--)
    {
        mx=0;
        cin>>n;
        int s,p,v;
        for(i=0;i<n;i++)
        {
            cin>>s>>p>>v;
            k=( p / (s+1) )*v;
            if( k >= mx)
            {
                mx=k;
            }
        }
        cout<<mx<<endl;
    }
}


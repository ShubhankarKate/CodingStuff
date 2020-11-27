#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,j,n,m,p,x,k,f;
    cin>>t;
    while(t--)
    {
    	m=j=0;
    	f = -1;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] > m)
            {
                m = a[i];
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i] == m)
            {
                if(i == 0)
                {
                    if(a[i+1] < a[i])
                    {
                        f = i+1;
                    }
                }
                else if(i == n-1)
                {
                    if(a[i-1] < a[i])
                    {
                        f = i+1;
                    }
                }
                else
                {
                    if(a[i-1] < a[i] || a[i+1] < a[i])
                    {
                        f = i+1;
                    }
                }
            }
        }
        cout<<f<<endl;
    }
}

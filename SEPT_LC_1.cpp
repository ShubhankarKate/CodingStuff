#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,k,j,i;
    cin>>t;
    while(t--)
    {
        j=0;
        cin>>n;
        long long a[n+1],b[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=-1;
        sort(a,a+n);
        for(i=1;i<=n;i++)
        {
            if(a[i-1]!=a[i])
            {
                b[j] = a[i-1];
                j++;
            }
        }
        if(b[0]==0)
        {
            cout<<j-1<<endl;
        }
        else
            cout<<j<<endl;
    }
}

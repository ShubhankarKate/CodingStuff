#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,n,r;
    cin>>t;
    while(t--)
    {
        r=0;
        cin>>n;
        int a[n];
        int b[n][n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((a[i] & a[j]) == a[i])
                {
                    r++;
                }
            }
        }
        cout<<r<<endl;
    }
}

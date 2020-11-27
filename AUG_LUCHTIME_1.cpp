#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,j,i,n,k,m,l,flag,fin;
    cin>>t;
    while(t--)
    {
        k=1,j=0,flag=0;
        cin>>n;
        int a[n+1]={0},f[11]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=-1;
        sort(a,a+n);
        for(i=1;i<=n;i++)
        {
            if(a[i-1]==a[i])
            {
                k++;
            }
            else
            {
                f[j] = k;
                j++;
                k=1;
            }
        }
        sort(f,f+j);
        k=1,m=0,l=0;
        for(i=1;i<=j;i++)
        {
            if(f[i-1] == f[i])
            {
                k++;
            }
            else
            {
                if( k > m )
                {
                    m = k;
                    l=f[i-1];
                }
                else if(k==m)
                {
                    if(f[i-1] < l)
                    {
                        l = f[i-1];
                    }
                }
                k=1;
            }
        }
        cout<<l<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,j,n,p,x,k,c,f;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n][n];
        k = n/2;
        if(n%2 == 0)
        {
            f = 1;
        }
        else
        {
            f = 0;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j || i+j == n-1)
                {
                    a[i][j] = 1;
                }
                else
                {
                    a[i][j] = 0;
                }
            }
        }
        if(f == 0)
        {
            a[0][k] = 1;
            a[n-1][k] = 1;
            a[k][k-1] = 1;
            a[k][k+1] = 1;
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
    }
}

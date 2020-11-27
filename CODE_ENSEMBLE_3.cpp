#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t=1,i,j,k,n,m,q,x1,y1,x2,y2;
    string n1;
    while(t--)
    {
        cin>>n>>m;
        long long a[n][m];
        for(i=0;i<n;i++)
        {
            cin>>n1;
            for(j=0;j<m;j++)
            {
                a[i][j] = n1[j]-48;
            }
        }
        cin>>q;
        while(q--)
        {
            cin>>x1>>y1>>x2>>y2;
            for(i=x1-1;i<x2;i++)
            {
                for(j=y1-1;j<y2;j++)
                {
                    if(a[i][j])
                    {
                        a[i][j] = 0;
                    }
                    else
                    {
                        a[i][j] = 1;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}

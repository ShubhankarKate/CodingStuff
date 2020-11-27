#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,t1,i,j,f,k,n;
    cin>>t;
    t1=t;
    while(t--)
    {
        cin>>n;
        int a[n][n];
        long long m=0,fin1=0,fin2=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(k=0;k<n;k++)
        {
            fin1 = fin2 = 0;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i-j == k)
                    {
                        fin1 = fin1 + a[i][j];
                    }
                    if(j-i == k)
                    {
                        fin2 = fin2 + a[i][j];
                    }
                }
            }
            m = max(m,fin1);
            m = max(m,fin2);
        }
        cout<<"Case #"<<(t1-t)<<": "<<m<<endl;
    }
}




/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,t1,i,j,f,k,m,n;
    cin>>t;
    t1=t;
    while(t--)
    {
        m=0;
        cin>>n;
        int a[n][n], fin[2*n] = {0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(k=0;k<n;k++)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i-j == k)
                    {
                        fin[k] = fin[k] + a[i][j];
                    }
                    if(j-i == k)
                    {
                        fin[2*n-1-k] = fin[2*n-1-k] + a[i][j];
                    }
                }
            }
        }
        for(i=0;i<2*n;i++)
        {
            //cout<<fin[i]<<" ";
            m = max(m,fin[i]);
        }
        cout<<"\nCase #"<<(t1-t)<<": "<<m<<endl;
    }
}
*/

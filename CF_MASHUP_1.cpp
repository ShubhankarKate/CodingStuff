#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,j,i,n=3,flag;
    while(t--)
    {
        flag=0;
        char a[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j] != a[n-i-1][n-j-1])
                {
                    flag=1;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

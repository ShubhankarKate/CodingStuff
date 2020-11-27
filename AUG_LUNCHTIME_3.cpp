#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,j,i,n,k,fin,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        fin=n;
        int a[n],r[n][m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>k;
                r[i][j] = (a[i]+ k);
            }
        }
    }
}

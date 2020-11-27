#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,j,i,n,k,fin,m;
    while(t--)
    {
        k=1;m=0;
        cin>>n;
        fin=n;
        int a[n+1];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        a[n]=-1;
        sort(a,a+n);
        for(i=1;i<=n;i++)
        {
            if(a[i-1] == a[i])
            {
                k++;
            }
            else
            {
                fin = fin - (k-1);
                m = max(m,k);
                k=1;
            }
        }
        cout<<m<<" "<<fin<<endl;
    }
}

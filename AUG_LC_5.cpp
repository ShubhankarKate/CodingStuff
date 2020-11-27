#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,k,co,c;
    cin>>t;
    while(t--)
    {
        c=0,co = 0;
        cin>>n>>k;
        int a[n+1],o[n]={0},o1[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        a[n] = -1;
        for(i=1;i<=n;i++)
        {
            if(a[i] != a[i-1])
            {
                o[c] = co;
                o1[c] = a[i-1];
                c++;
                co = 0;
            }
            else
            {
                co++;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<o[i]<<" "<<o1[i]<<endl;
        }
    }
}

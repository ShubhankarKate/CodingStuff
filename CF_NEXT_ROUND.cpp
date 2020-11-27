#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,i,n,flag,k,k1=0;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    flag = a[k-1];
    for(i=0;i<n;i++)
    {
        if(a[i] >= flag && a[i]>0)
        {
            k1++;
        }
    }
    cout<<k1<<endl;
}

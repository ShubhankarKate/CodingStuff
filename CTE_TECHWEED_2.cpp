#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,n,k=0,x,w=0,w1,q;
    cin>>n>>q;
    int a[n];
    for(i = 0;i<n;i++)
    {
        cin>>a[i];
        w = w + a[i];
    }
    sort(a,a+n);
    while(q--)
    {
        k=0;w1=w;
        cin>>x;
        for(i = 0;i < n; i++)
        {
            if( a[i] < (2*x))
            {
                w1 = w1 - a[i];
            }
            else
            {
                break;
            }
        }
        cout<<w1<<endl;
    }
}

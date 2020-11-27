#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,n,k,f,w,g;
    cin>>t;
    while(t--)
    {
        f=w=g=0;
        cin>>n>>k;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i] > k)
            {
                g=1;
            }
            if(w + a[i] > k)
            {
                f++;
                w = 0;
            }
            w = w + a[i];
        }
        if(g==0)
        {
            cout<<(f+1)<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

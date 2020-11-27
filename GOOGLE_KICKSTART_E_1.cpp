#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,t1,i,n,m,k,d;
    cin>>t;
    t1=t;
    while(t--)
    {
        m=1,k=1,d=0;
        cin>>n;
        long long a[n];
        cin>>a[0];
        cin>>a[1];
        d = a[1] - a[0];
        k++;
        if(n==2)
        {
            cout<<"Case #"<<(t1-t)<<": 2"<<endl;
        }
        else
        {
            for(i=2;i<n;i++)
            {
                cin>>a[i];
                if(a[i]-a[i-1] == d)
                {
                    k++;

                }
                else
                {
                    d = a[i] - a[i-1];
                    m = max(k,m);
                    k=2;
                }
            }
            cout<<"Case #"<<(t1-t)<<": "<<max(k,m)<<endl;
        }
    }
}

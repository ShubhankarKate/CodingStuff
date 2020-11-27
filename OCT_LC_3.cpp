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
        cin>>n;
        int a[n];
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else if( (n & (n-1)) == 0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(i=0;i<n;i++)
            {
                if(i==0)
                {
                    a[i] = 2;
                }
                else if(i==1)
                {
                    a[i] = 3;
                }
                else if(i==2)
                {
                    a[i] = 1;
                }
                else
                {
                    a[i] = i+1;
                }
            }
            for(i=3;i<n;i++)
            {
                if( (a[i] & i) == 0 )
                {
                    k = a[i];
                    a[i] = a[i+1];
                    a[i+1] = k;
                }
            }
            for(i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}

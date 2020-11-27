#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,n,k,f,w,g;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        w = (log(n)/log(2));
        for(i = 1; i < w; i++ )
        {
            if( n >= pow(2,i) && n < pow(2,i+1) )
            {
                cout<<i+1<<endl;
                break;
            }
        }
    }
}

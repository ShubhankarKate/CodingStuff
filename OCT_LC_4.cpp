#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,i1,n,p,x,k,c,f;
    cin>>t;
    while(t--)
    {
        c=f=i1=0;
        cin>>n>>x>>p>>k;
        k--;p--;
        int inp[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>inp[i];
        }
        sort(inp,inp+n);
        if( p < k )
        {
            if( inp[p] > x )
            {
                i1 = p;
                while( inp[i1] > x && i1 >= 0)
                {
                    i1--;
                }
                f = 1;
                c = p - i1;
            }
            else if ( inp[p] == x )
            {
                c=0;f=1;
            }
        }
        else if( p == k )
        {
            if( inp[k] < x)
            {
                i1 = k;
                while( inp[i1] < x && i1 <= (n-1) )
                {
                    i1++;
                }
                f = 1;
                c = i1 - k;
            }
            else if( inp[k] > x)
            {
                i1 = k;
                while( inp[i1] > x && i1 >= 0)
                {
                    i1--;
                }
                f = 1;
                c = k - i1;
            }
            else
            {
                c=0;f=1;
            }
        }
        else if ( p > k )
        {
            if( inp[p] < x)
            {
                i1 = p;
                while( inp[i1] < x && i1 <= n-1)
                {
                    i1++;
                }
                f = 1;
                c = i1 - p;
            }
            else if ( inp[p] == x)
            {
                c=0;f=1;
            }
        }
        if(f==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<c<<endl;
        }
    }
}

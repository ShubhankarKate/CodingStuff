#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,i,fx,fy;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=4*n-1;
        long long x[k],cx[k]={0};
        long long y[k],cy[k]={0};
        for(i=0;i<k;i++)
        {
            cin>>x[i]>>y[i];
            (cx[x[i]-1]++)%2;
            (cy[y[i]-1]++)%2;
            if(cx[x[i]-1]==1)
            {
                fx=x[i];
            }
            else if(cx[y[i]-1]==1)
            {
                fy=y[i];
            }
        }
        cout<<fx<<" "<<fy<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,i,c,mc,r,v,k;
	string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        long long val[n+1];
        for(i=0;i<n;i++)
        {
            cin>>v;
            if(v<k)
            {
                val[i] = k-v;
            }
            else if(v%k == 0)
                val[i] = 0;
            else
            {
                val[i] = k - v%k;
            }
        }
        val[n] = -1;
        sort(val, val + n);
        mc = 1, r = val[0], c = 1;
        for (i = 1; i <= n; i++)
        {
            if (val[i] == val[i - 1] && val[i-1] != 0)
            {
                c++;
            }
            else
            {
                if (c >= mc)
                {
                    mc = c;
                    r = val[i-1];
                }
                c = 1;
            }
        }
        if(mc == 1 && r == 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<(mc-1)*k + (r+1)<<endl;
        }
    }
}

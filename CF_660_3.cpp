#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,m,i,x,y,temp,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>m;
        long long popu[n],h[n],fin[n];
        for(i=0;i<n;i++)
        {
            cin>>popu[i];
            fin[i] = popu[i];
        }
        fin[0] = m;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            h[i] = abs(temp);
        }
        for(i=0;i<n-1;i++)
        {
            cin>>x>>y;
            if(x!=1)
            {
                fin[x-1] += fin[y-1];
            }
        }
        for(i=0;i<n;i++)
        {
            if( fin[i]%2 - h[i]%2 == 0 )
            {
                if(h[i] > fin[i])
                {
                    flag = 1;
                }
            }
            else
            {
                flag=1;
            }
        }
        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

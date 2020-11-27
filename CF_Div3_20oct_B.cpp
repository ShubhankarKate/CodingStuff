#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,j,n,p,x,k,f;
    cin>>t;
    while(t--)
    {
    	f=j=k=p=0;
        cin>>n;
        int a,b[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>a;
            if(a == 1)
            {
                if(p==1)
                {
                    b[j] = k;
                    j++;
                }
                k = 0;
                p = 1;
            }
            else
            {
                k++;
            }
        }
        for(i=0;i<j;i++)
        {
            f = f + b[i];
            //cout<<b[i]<<" ";
        }
        cout<<f<<endl;
    }
}

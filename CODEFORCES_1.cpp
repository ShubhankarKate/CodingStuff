#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,mx,k,a,b,c,f,i;
    cin>>t;
    while(t--)
    {
        mx=0,f=0;
        cin>>n;
        int num[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>num[i];
            if(num[i]>=mx)
            {
                mx=num[i];
                b=i+1;
            }
        }
        if(b==n || b==1)
        {
            f=1;
            cout<<"NO"<<endl;
        }
        a=b-1;
        c=b+1;
        while(num[a-1]>=num[b-1] && f==0)
        {
            a--;
            if(a<=0)
            {
                f=1;
                cout<<"NO"<<endl;
            }
        }
        while(num[b-1]<=num[c-1] && f==0)
        {
            c++;
            if(b>=n)
            {
                f=1;
                cout<<"NO"<<endl;
            }
        }
        if(f==0)
        {
            cout<<"YES"<<endl;
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
    }
}

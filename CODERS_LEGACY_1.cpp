#include<bits/stdc++.h>
using namespace std;
int main()
{
	long t,n,i,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        long long val[n];
        for(i=0;i<n;i++)
        {
            cin>>val[i];
            if(val[i]%2==0)
            {
                flag = 1;
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

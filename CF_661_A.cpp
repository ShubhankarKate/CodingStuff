#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,n,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        long long num[n];
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        sort(num, num+n);
        for(i=1;i<n;i++)
        {
            if(num[i] - num[i-1] > 1)
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

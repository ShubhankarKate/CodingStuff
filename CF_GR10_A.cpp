#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,n,k,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        long long a[n];
        cin>>a[0];
        k=a[0];
        for(i=1;i<n;i++)
        {
            cin>>a[i];
            if(a[i] != k)
            {
                flag = 1;
            }
        }
        if(flag==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(a[0]+a[1]>a[n-1])
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<"1 2 "<<n<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,maxi,x,i;
    maxi=0;
    cin>>n;
    long long num[n];
    for(i=0;i<n;i++)
    {
        cin>>num[i];
    }
    sort(num,num+n);
    for(i=0;i<n;i++)
    {
        x=num[i]*(n-i);
        if(x >= maxi)
        {
            maxi=x;
        }
    }
    cout<<maxi<<endl;
}

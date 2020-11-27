#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,n1,rem,rev;
	cin>>t;
    while(t--)
    {
        cin>>n;
        n1=n;rev=0;
        while(n1!=0)
        {
            rem=n1%10;
            rev=(rev*10)+rem;
            n1=n1/10;
        }
        cout<<rev<<endl;
    }
}

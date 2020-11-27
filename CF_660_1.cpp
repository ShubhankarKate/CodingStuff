#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,z;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n < 31)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            if(n == 36)
            {
                cout<<"6 10 15 5"<<endl;
            }
            else if(n == 40)
            {
                cout<<"6 10 15 9"<<endl;
            }
            else if(n == 44)
            {
                cout<<"6 10 15 13"<<endl;
            }
            else
            {
                cout<<"6 10 14 "<<(n-30)<<endl;
            }
        }
    }
}

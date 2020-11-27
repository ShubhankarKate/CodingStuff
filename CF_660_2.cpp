#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,z;
	string s;
    cin>>t;
    while(t--)
    {
        s="";
        cin>>n;
        z = n%4==0?(n/4):(n/4)+1;
        s = s.insert(0,n-z,'9');
        s = s.insert(n-z,z,'8');
        cout<<s<<endl;
    }
}

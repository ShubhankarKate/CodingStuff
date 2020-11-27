#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,i,z,oc,m;
	string s;
    cin>>t;
    while(t--)
    {
        oc=0;
        cin>>n;
        cin>>s;
        m=n;
        for(i=0;i<n;i++)
        {
            if(s[i] == '(')
            {
                oc++;
            }
            else if(s[i] == ')')
            {
                oc--;
            }
            m = min(oc,m);
        }
        if(m >= 0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            cout<<abs(m)<<endl;
        }
    }
}

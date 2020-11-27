#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,i,a;
	string s;
    cin>>t;
    while(t--)
    {
        s = "";
        cin>>n>>k;
        for(i = 0;i<n;i++)
        {
            cin>>a;
            if( a < k )
            {
                s = s + '0';
            }
            else
            {
                if(a%k == 0)
                {
                    s = s + '1';
                }
                else
                {
                    s = s + '0';
                }
            }
        }
        cout<<s<<endl;
    }

}

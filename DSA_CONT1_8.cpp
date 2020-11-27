#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,fin,n1,n2;
	string org,s;
	cin>>t;
    while(t--)
    {
        fin=0;
        cin>>n;
        cin>>org;
        while(n--)
        {
            cin>>s;
            if(s=="CONTEST_WON")
            {
                cin>>n1;
                fin+=300;
                if(n1<20)
                {
                    fin+=20-n1;
                }
            }
            else if(s=="TOP_CONTRIBUTOR")
            {
                fin+=300;
            }
            else if(s=="BUG_FOUND")
            {
                cin>>n2;
                fin+=n1;
            }
            else if(s=="CONTEST_HOSTED")
            {
                fin+=50;
            }
        }
        if(org=="INDIAN")
        {
            cout<<(fin/200)<<endl;
        }
        else
        {
            cout<<(fin/400)<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,i,h,p,r,flag;
    cin>>t;
    while(t--)
    {
        flag=r=0;
        cin>>h>>p;
        while(p>0)
        {
            flag = flag + p;
            p = p/2;
            if(flag >= h)
            {
                r = 1;
                break;
            }
        }
        cout<<r<<endl;
    }
}

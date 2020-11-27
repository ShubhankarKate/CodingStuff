#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,c1,c2,r1,r2;
    cin>>t;
    while(t--)
    {
        cin>>c1>>c2;
        if(c1%9 == 0)
        {
            r1 = c1/9;
        }
        else
        {
            r1 = c1/9 + 1;
        }
        if(c2%9 == 0)
        {
            r2 = c2/9;
        }
        else
        {
            r2 = c2/9 + 1;
        }
        if(r1 > r2)
        {
            cout<<"1 "<<r2<<endl;
        }
        else if(r2 > r1)
        {
            cout<<"0 "<<r1<<endl;
        }
        else
        {
            cout<<"1 "<<r2<<endl;
        }
    }
}

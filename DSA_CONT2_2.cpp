#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,flag,i,a1,b1,ra,rb;
	string res,v;
    cin>>t;
    while(t--)
    {
        a1=0,b1=0;
        cin>>n;
        flag = 2*n;
        ra=rb=n;
        cin>>res;
        for(int i=0;i<2*n;i++)
        {
            v=res[i];
            if( (a1 - b1) > rb || (b1 - a1) > ra)
            {
                flag = i;
                break;
            }
            if(i%2 == 0)
            {
                if(v == "1")
                {
                    a1++;
                }
                ra--;

            }
            if(i%2 == 1)
            {
                if(v == "1")
                {
                    b1++;
                }
                rb--;
            }
        }
        cout<<flag<<endl;
    }
}

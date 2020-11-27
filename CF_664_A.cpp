#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,r,g,b,w,k1,k2,k3,k4;
    cin>>t;
    while(t--)
    {
        k1=k2=k3=k4=0;
        cin>>r>>g>>b>>w;
        if(r%2 == 1)
        {
            k1=1;
        }
        if(g%2 == 1)
        {
            k2=1;
        }
        if(b%2 == 1)
        {
            k3=1;
        }
        if(w%2 == 1)
        {
            k4=1;
        }
        if(r==0 || g==0 || b==0)
        {
            if((k1+k2+k3+k4) == 1 || (k1+k2+k3+k4) == 0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            if((k1+k2+k3+k4) %2 == 1 || (k1+k2+k3+k4) == 0)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}

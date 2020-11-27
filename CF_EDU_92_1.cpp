#include<bits/stdc++.h>
using namespace std;
/*long long is_prime(long long n)
{
    for(long long i = 2; i<=(n/2); i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}*/
int main()
{
	long long t,x,y,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        x = y = -1;
        /*for(i=l;i<=r;i++)
        {
            if(is_prime(i))
            {
                if(2*i <= r)
                {
                    x = i;
                    y = 2*i;
                }
            }
        }*/
        if(2*l <= r)
        {
            x = l;
            y = 2*l;
        }
        cout<<x<<" "<<y<<endl;
    }
}

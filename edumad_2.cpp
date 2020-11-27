#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,k1,k2;
    cin>>n;
    if(n<=3)
    {
        cout<<(3-n+1)<<endl;
    }
    else
    {
        for(i=0;i<50;i++)
        {
            k1 = 3*(pow(2,i)-1);
            k2 = 3*(pow(2,i+1)-1);
            if( n > k1 && n <= k2)
            {
                cout<<(k2-n+1)<<endl;
            }
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,k;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=n+1;
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            if(n%2 == 1)
            {
                cout<<n<<" ";
                k=n;
            }
            for(i=1;i<=n/2;i++)
            {
                cout<<i<<" "<<(k-i)<<" ";
            }
            cout<<endl;
        }
    }
}

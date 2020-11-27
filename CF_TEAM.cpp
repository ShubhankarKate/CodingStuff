#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c,k=0;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a+b+c > 1)
        {
            k++;
        }
    }
    cout<<k<<endl;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,n,s,n1,x,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n1=n;
        s = n1;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
        }
        if(n<6)
        {
            cout<<s<<endl;
        }
        else
        {
            while(n1>5)
            {
                if((n1/2) > 2)
                {
                    s = s + n1/2;
                }
                n1 = n1/2;
            }
            cout<<s<<endl;
        }
    }
}

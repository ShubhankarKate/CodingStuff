#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,n,k,x,y,w,f,f1;
    cin>>t;
    while(t--)
    {
        f=f1=0;
        cin>>n>>k>>x>>y;
        while(f < n*n)
        {
            if((x+k)%n != y)
            {
                x = (x+k)%n;
                f++;
            }
            else
            {
                f1=1;
                break;
            }
        }

        if(f1 == 0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}

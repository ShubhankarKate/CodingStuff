#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1,i,j,c,r,k1,k2;
    string s = "UR";
    while(t--)
    {
        k1=k2=1;
        cin>>r>>c;
        string u;
        string d;
        for(i=0;i<r-1;i++)
        {
            u = u + 'U';
            d = d + 'D';
        }
        for(i=0;i<c;i++)
        {
            if(i%2==0)
            {
                s = s + u;
                if(i != c-1)
                {
                    s = s + 'R';
                }
            }
            else
            {
                s = s + d;
                if(i != c-1)
                {
                    s = s + 'R';
                }
            }
        }
        cout<<s<<endl;
    }
}

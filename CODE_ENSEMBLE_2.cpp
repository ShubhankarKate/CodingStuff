#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,v,h,u,d,l,r,x,y,q,x1,y1;
    string s;
    cin>>t;
    while(t--)
    {
        u=d=l=r=0;
        cin>>s;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == 'R')
            {
                r++;
            }
            else if(s[i] == 'L')
            {
                l++;
            }
            else if(s[i] == 'U')
            {
                u++;
            }
            else if(s[i] == 'D')
            {
                d++;
            }
        }
        cin>>x>>y;
        cin>>q;
        while(q--)
        {
            cin>>x1>>y1;
            h = x1-x;
            v = y1-y;
            if( h <=r && h>=(-l))
            {
                if( v <= u && v >= (-d))
                {
                    cout<<"YES "<<(abs(v) + abs(h))<<"\n";
                }
                else
                {
                    cout<<"NO"<<"\n";
                }
            }
            else
            {
                cout<<"NO"<<"\n";
            }
        }
    }
}

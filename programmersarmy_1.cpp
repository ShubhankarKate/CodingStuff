#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double t,i,n,h,m,k,a;
    string s;
    cin>>t;
    while(t--)
    {
        a=0;
        cin>>s;
        h = ( ((int)s[0] - 48)*10 + (int)s[1] - 48 )%12;
        m = ((int)s[3] - 48)*10 + (int)s[4] - 48;
        if(1)
        {
            k = m/5;
        }
        else
        {
            k = m/5 + 1;
        }
        a = abs( ( k*30 - h*30 ) - (m/2) );
        cout<<min(a, 360 - a)<<" degree"<<endl;
    }
}

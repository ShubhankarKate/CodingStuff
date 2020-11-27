#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,n,k,v;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        int b[2]={0};
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i] == '0')
            {
                b[0]++;
            }
            else
            {
                b[1]++;
            }
        }
        v = n/k;
        if(b[0]%v == 0 && b[1]%v == 0)
        {
            string f(b[0]/v, '0');
            for(i=0;i<(b[1]/v);i++)
            {
                f.append("1");
            }
            for(i=0;i<v;i++)
            {
                if(i%2 == 0)
                {
                    cout<<f;
                }
                else
                {
                    reverse(f.begin(),f.end());
                    cout<<f;
                    reverse(f.begin(),f.end());
                }
            }
            cout<<endl;
        }
        else
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
}

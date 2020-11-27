#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,n,k;
    string s,f;
    cin>>t;
    while(t--)
    {
        f="";
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            f = f + s[n-1];
        }
        cout<<f<<endl;
    }
}

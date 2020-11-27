#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n=0,l;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l = s.length();
        if( s[0] == '+' || s[l-1] == '+')
        {
            n++;
        }
        else
        {
            n--;
        }
    }
    cout<<n<<endl;
}

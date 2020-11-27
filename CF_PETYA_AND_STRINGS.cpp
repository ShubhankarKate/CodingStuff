#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,n=0,l;
    string s1,s2,s;
    //cin>>t;
    while(t--)
    {
        cin>>s1>>s2;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        if( s1.compare(s2) < 0)
        {
            cout<<"-1"<<endl;
        }
        else if (s1.compare(s2) > 0)
        {
            cout<<"1"<<endl;;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
}

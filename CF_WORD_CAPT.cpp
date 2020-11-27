#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,i,n;
    string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(i==0)
        {
            if((int)s[0] > 95)
            {
                cout<< ( (char)( (int)s[0] - 97 + 65));
            }
            else
            {
                cout<<s[0];
            }
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}

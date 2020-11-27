#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,flag;
	string s;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        int index[26]={0};
        cin>>s;
        for(int i=0;i<n;i++)
        {
            index[ ( (int)s[i] - (int)'a' ) ]++;
        }
        for(int i=0;i<26;i++)
        {
            if( index[i]%2 != 0 )
            {
                flag=1;
            }
        }
        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

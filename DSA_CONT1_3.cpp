#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k,len;
	string s;
	cin>>t;
    while(t--)
    {
        cin>>s;
        int flag=0;
        k=s.length();
        int n[26]={0},n1[26]={0};
        len=(k/2);
        for(int i=0;i<len;i++)
        {
            int a=(int)'a';
            n[((int)s[i] - a)]++;
            n1[((int)s[k-i-1] - a)]++;
        }
        for(int i=0;i<26;i++)
        {
            //cout<<n[i]<<" "<<n1[i]<<endl;
            if(n[i]!=n1[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

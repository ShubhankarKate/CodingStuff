#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,q,f,c,que;
    string s;
    cin>>t;
    while(t--)
    {
        k=1,f=0;
        cin>>n;
        cin>>q;
        cin>>s;
        int freq[26]={0};
        sort(s.begin(), s.end());
        for(int i=0;i<n;i++)
        {
            freq[((int)s[i]-(int)'a')]++;
            /*if(s[i]==s[i+1])
            {
                k++;
            }
            else
            {
                freq[f]=k;
                k=1;
                f++;
            }*/
        }
        while(q--)
        {
            que=0;
            cin>>c;
            for(int i=0;i<26;i++)
            {
                if(freq[i]>=c)
                {
                    que+=(freq[i]-c);
                }
            }
            cout<<que<<endl;
        }
    }
}

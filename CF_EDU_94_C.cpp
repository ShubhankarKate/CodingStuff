#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,x,l,flag;
    string s;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>s;
        cin>>x;
        l = s.length();
        int bin[l],b[l];

        for(i=0;i<l;i++)
        {
            bin[i]=1;
            b[i]=0;
        }

        if(x>l)
        {
            flag=1;
        }
        else
        {
            for(i=0;i<l;i++)
            {
                if(i<x && i+x<l)
                {
                    if(s[i]=='0')
                    {
                        bin[i+x]=0;
                    }
                }
                else if(i>=x && i<l-x)
                {
                    if(s[i]=='0')
                    {
                        bin[i+x]=0;
                        bin[i-x]=0;
                    }
                }
                else if(i-x>=0 && i+x>=l)
                {
                    if(s[i]=='0')
                    {
                        bin[i-x]=0;
                    }
                }
            }
        }

        for(i=0;i<l;i++)
        {
            if(i<x && i+x<l)
            {
                if(bin[i+x]==1)
                {
                    b[i]=1;
                }
            }
            else if(i>=x && i<l-x)
            {
                if(bin[i+x]==1 || bin[i-x]==1)
                {
                    b[i]=1;
                }
            }
            else if(i-x>=0 && i+x>=l)
            {
                if(bin[i-x]==1)
                {
                    b[i]=1;
                }
            }
        }

        for(i=0;i<l;i++)
        {
            if( b[i] != ( (int)s[i] -48 ) )
            {
                flag=1;
            }
        }

        if(flag==0)
        {
            for(i=0;i<l;i++)
            {
                cout<<bin[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
}

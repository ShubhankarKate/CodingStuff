#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,t1="",t2="";
    long long x=0,y=0,i,l1,l2;
    cin>>s1>>s2;
    l1 = s1.length();
    l2 = s2.length();
    for(i=0;i<l1;i++)
    {
        if(isalpha(s1[i]))
        {
            t1 = t1 + s1[i];
        }
        else
        {
            x = x*10 + (int)s1[i] - 48;
        }
    }
    for(i=0;i<l2;i++)
    {
        if(isalpha(s2[i]))
        {
            t2 = t2 + s2[i];
        }
        else
        {
            y = y*10 + (int)s2[i] - 48;
        }
    }
    //cout<<t1<<" "<<x<<endl;
    //cout<<t2<<" "<<y<<endl;
    if(t1<t2)
    {
        cout<<"<"<<endl;
    }
    else if(t1>t2)
    {
        cout<<">"<<endl;
    }
    else
    {
        if(x<y)
        {
            cout<<"<"<<endl;
        }
        else if(x>y)
        {
            cout<<">"<<endl;
        }
        else
        {
            cout<<"="<<endl;
        }
    }
}

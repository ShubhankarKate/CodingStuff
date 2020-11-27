#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,pair1;
    string s;
    cin>>t;
    int t1=t;
    int soln[t];
    while(t--)
    {
        pair1=0;
        cin>>s;
        int len=s.length();
        if(len==1)
        {
            pair1=0;
        }
        else
        {
            for(int i=0;i<(len-1);i++)
            {
                if(s[i]!=s[i+1])
                {
                    pair1++;
                    i++;
                }
            }
        }
        soln[t]=pair1;
    }
    for(int i=(t1-1);i>=0;i--)
    {
        cout<<soln[i]<<endl;
    }
}







/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,pair1,pair2,pair3;
    string s;
    cin>>t;
    int t1=t;
    int soln[t];
    while(t--)
    {
        pair1=0,pair2=0,pair3=0;
        cin>>s;
        int len=s.length();
        if(len%2==1)
        {
            for(int i=1;i<len;i+=2)
            {
                string s2=s.substr(i,2);
                string s3=s.substr(i-1,2);
                if(s2=="xy" || s2=="yx")
                {
                    pair2++;
                }
                if(s3=="xy" || s3=="yx")
                {
                    pair3++;
                }
            }
        }
        else
        {
            for(int i=0;i<len;i+=2)
            {
                string s1=s.substr(i,2);
                if(s1=="xy" || s1=="yx")
                {
                    pair1++;
                }
            }
        }
        if(pair1>=pair2)
        {
            if(pair1>=pair3)
            {
                soln[t]=pair1;
            }
        }
        if(pair2>=pair3)
        {
            if(pair2>=pair1)
            {
                soln[t]=pair2;
            }
        }
        if(pair3>=pair1)
        {
            if(pair3>=pair2)
            {
                soln[t]=pair3;
            }
        }
    }
    for(int i=(t1-1);i>=0;i--)
    {
        cout<<soln[i]<<endl;
    }
}
*/

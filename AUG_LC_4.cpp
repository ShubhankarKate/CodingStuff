#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,k1,f,r,ind;
	string s, s1,sfin,temp,t1,t2,t3;
	char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cin>>t;
    while(t--)
    {
        int sc[26]={0},s1c[26]={0};
        f=0,ind=0,r=0;
        sfin = "", t3="";
        cin>>s;
        sort(s.begin(),s.end());
        cin>>s1;
        temp = s1[0];
        for(i=0;i<s1.length();i++)
        {
            s1c[ (int)s1[i] - (int)'a' ]++;
            if(i==0)
            {
                k1 = (int)s1[i] - (int)'a';
            }
            t2 = s1[i];
            if(f == 0 && t2 != temp)
            {
                t1 = s1[i];
                f++;
            }
        }
        for(i=0;i<s.length();i++)
        {
            sc[ (int)s[i] - (int)'a' ]++;
        }
        for(i=0;i<26;i++)
        {
            sc[i] = sc[i] - s1c[i];
            if(i==k1)
            {
                if(t1 < temp)
                {
                    t3 = s1;
                    t3 = t3.insert(s1.length(),sc[i],alp[i]);
                }
                else
                {
                    t3 = t3.insert(0, sc[i], alp[i]);
                    t3 = t3+s1;
                }
                sfin = sfin + t3;
                ind = ind + s1.length() + sc[i];
            }
            else
            {
                sfin = sfin.insert(ind,sc[i],alp[i]);
                ind = ind + sc[i];
            }
        }
        cout<<sfin<<endl;
    }
}

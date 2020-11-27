#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,flag,i,j,k;
	string s;
    cin>>t;
    while(t--)
    {
        flag=0,s="";
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        string alp= "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
        if(a[0] == 0)
        {
            cout<<alp[flag]<<endl;
        }
        else
        {
            s = s.insert(0,a[0],alp[flag]);
            cout<<s<<endl;
        }
        for(j=0;j<n;j++)
        {
            if(j == n-1)
            {
                break;
            }
            else if(a[j] == 0)
            {
                s="";
                flag++;
                if(a[j+1] != 0)
                {
                    s = s.insert(0,a[j+1],alp[flag]);
                }
                else
                {
                    s = s.insert(0,1,alp[flag]);
                }
                cout<<s<<endl;
            }
            else if (a[j]<a[j+1])
            {
                flag++;
                k = s.length();
                s = s.erase(a[j],k);
                s = s.insert(a[j],a[j+1]-a[j],alp[flag]);
                cout<<s<<endl;
            }
            else if (a[j]>a[j+1])
            {
                s = s.substr(0,a[j+1]);
                cout<<s<<endl;
            }
            else
            {
                cout<<s<<endl;
            }
        }
        if(a[n-1] == 0)
        {
            s="";
            flag++;
            s = s.insert(0,1,alp[flag]);
        }
        else
        {
            s = s.substr(0,a[n-1]);
        }
        cout<<s<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,n,flag,ind,ind1;
	string res;
    cin>>t;
    while(t--)
    {
        res="",flag=0,ind1=0;
        cin>>n;
        int a[2*n];
        for(int i=0;i<2*n;i++)
        {
            cin>>a[i];
        }
        //cout<<res.length()<<endl;
        //cout<<*lower_bound(a+ind1,a+2*n,a[flag]);
        while(res.length() <= 2*n)
        {
            ind= *lower_bound(a+ind1,a+2*n,a[flag]);
            for(int i=ind1;i<ind;i++)
            {
                res = res+ char(a[i]);
            }
            cout<<res<<endl;
            ind1 = ind;
            if(flag<=ind1)
            {
                flag++;
            }
            else
            {
                flag = ind+1;
            }
        }
        //cout<<res<<endl;
    }
}

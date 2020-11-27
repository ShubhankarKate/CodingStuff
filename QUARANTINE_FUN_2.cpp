#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,flag,k;
    cin>>t;
    while(t--)
    {
        flag=0,k=1;
        cin>>n;
        int val[n];
        for(i=0;i<n;i++)
        {
            cin>>val[i];
        }
        sort(val, val+n);
        for(i=0;i<n;i++)
        {
            if(val[i] == val[i+1])
            {
                k++;
            }
            else
            {
                if(k >= flag)
                {
                    flag = k;
                }
                k=0;
            }
        }
        cout<<flag<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,mini;
	cin>>t;
    while(t--)
    {
        k=1;
        cin>>n;
        int val[n]={0};
        for(int i=0;i<n;i++)
        {
            cin>>val[i];
        }
        mini=val[0];
        for(int i=0;i<n;i++)
        {
            if(i>0)
            {
                if(val[i] <= val[i-1] && val[i] <= mini)
                {
                    mini=val[i];
                    k++;
                }
            }
        }
        cout<<k<<endl;
    }
}

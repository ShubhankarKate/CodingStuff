#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,val,k1,flag,i;
	long double k;
	cin>>t;
    while(t--)
    {
        val=0,k=0,flag=0,i=1;
        cin>>n;
        while(flag==0)
        {
            k=pow(5,i);
            k1=(long long)(n/k);
            //cout<<k<<endl;
            if(k1==0)
            {
                flag=1;
                break;
            }
            else
            {
                val=val+k1;
                i++;
            }
        }
        cout<<val<<endl;
    }
}

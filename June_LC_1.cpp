#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,sum1,sum2;
	cin>>t;
	int loss[t];
	int t1=t;
	while(t--)
	{
		sum1=0,sum2=0;
		cin>>n;
		cin>>k;
		int p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i];
			sum1=sum1+p[i];
			if(p[i]<=k)
			{
				sum2=sum2+p[i];
			}
			else
			{
				sum2=sum2+k;
			}
		}
		loss[t]=sum1-sum2;
	}
	for(int i=(t1-1);i>=0;i--)
    {
        cout<<loss[i]<<endl;
    }
}

#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k;
		cin>>n;
		string s[n];
		int a[n],b[n]={0},temp0,temp1,count=0;
		for(i=0;i<n;i++)
		{
			cin>>s[i];
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			temp0=0;
			temp1=0;
			if(b[i]!=0)
			{
				continue;
			}
			else
			{
				for(j=0;j<n;j++)
				{
					if(s[i]==s[j])
					{
						b[j]++;
						if(a[i]==1)
						{
							temp1++;
						}
						else
						{
							temp0++
						}
					}
				}
				if(temp1>temp0)
				{
					count=count+temp1;
				}
				else
				{
					count=count+temp0;
				}
			}
		}
		cout>>count>>endl;
	}
	return(0);
}

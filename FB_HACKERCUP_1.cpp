#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("FB_1_input.txt","r",stdin);
        freopen("FB_1_output.txt","w",stdout);
    #endif // ONLINE_JUDGE
	int t,p;
	cin>>t;
	p=t;
	while(t--)
	{
		int n,i,j,k;
		scanf("%d", &n);
		char x;
		int I[n]={0},O[n]={0},F[n][n]={0};
		string in, ou;
		cin>>in;
		cin>>ou;
		for(i=0;i<n;i++)
        {
            x = in[i];
            if(x == 'Y')
            {
                I[i] = 1;
            }
        }
        for(i=0;i<n;i++)
        {
            x = ou[i];
            if( x == 'Y')
            {
                O[i] = 1;
            }
        }
		int flag;
		for(i=0;i<n;i++)
		{
			F[i][i]=1;
			if(O[i]==1)
			{
				flag=0;
				if(i!=n-1)
				{
				    for(j=i+1;j<n;j++)
				    {
				    	if(I[j]==1 && flag == 0)
				    	{
				    		F[i][j]=1;
				    	}
				    	else if (I[j] == 0)
				    	{
				    	    F[i][j]=0;
				    	    flag=1;
				    	}
				    	else if(flag==1)
				    	{
				    	    F[i][j]=0;
				    	}
				    	if(O[j]==0)
				    	{
				    		flag=1;
				    	}
				    }
				}
				flag=0;
			    if(i!=0)
				{
				    for(j=i-1;j>=0;j--)
				    {
				    	if(I[j]==1 && flag==0)
				    	{
				    		F[i][j]=1;
				    	}
				    	else if (I[j] == 0)
				    	{
				    	    F[i][j]=0;
				    	    flag=1;
				    	}
				    	else if(flag==1)
				    	{
				    		F[i][j]=0;
				    	}
				    	if(O[j]==0)
				    	{
				    		flag=1;
				    	}
				    }
				}
			}
			else
			{
				for(j=0;j<n;j++)
				{
					if(i==j)
					{
						F[i][j]=1;
					}
					else
					{
						F[i][j]=0;
					}
				}
			}
		}
		printf("Case #%d:\n", p-t);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(F[i][j]==1)
				{
				    printf("Y");
				}
				else
				{
				    printf("N");
				}
			}
			printf("\n");
		}
	}
	return(0);
}

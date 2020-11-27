#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","r",stdout);
    #endif // ONLINE_JUDGE
	int t,n,i,k1,k2,c;
	string in,ou,flag;
    cin>>t;
    while(t--)
    {
        l=u=c=0;
        cin>>n;
        cin>>in;
        cin>>ou;
        int I[n]={0},O[n]={0};
        int f[n][n]={0};
        for(i=0;i<n;i++)
        {
            flag = in[i];
            if(flag == "Y")
            {
                I[i] = 1;
            }
        }
        for(i=0;i<n;i++)
        {
            flag = ou[i];
            if( flag == "Y")
            {
                O[i] = 1;
            }
        }
        for(i=0;i<n;i++)
        {
            f[i][i]=1;
            if( I[i] == 1 )
            {
                if(O[i] == 1)
                {
                    if(i == 0)
                    {
                        for(k1=0;k1<n;k1++)
                        {
                            if(I[i] == 1 && O[i+1] == 1)
                            {
                                f[k1+1][i]=1;
                            }
                        }
                    }
                    else if(i == n-1)
                    {
                        for(k2=n-1;k2>0;k2--)
                        {
                            if(I[i] == 1 && O[i-1] == 1)
                            {
                                f[k2-1][i]=1;
                            }
                        }
                    }
                    else
                    {
                        for(k1=i;k1<n;k1++)
                        {
                            if(I[i] == 1 && O[i+1] == 1)
                            {
                                f[k1+1][i]=1;
                            }
                        }
                        for(k2=i;k2>0;k2--)
                        {
                            if(I[i] == 1 && O[i-1] == 1)
                            {
                                f[k2-1][i]=1;
                            }
                        }
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {

            }
        }
    }
}

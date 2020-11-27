#include<bits/stdc++.h>
using namespace std;
int comp(double a, double b)
{
    if(abs(a-b)<1e-9)
        return 1;
    else
        return 0;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t,n,i,j,k,l,m,c,mn,mx;
	double stamp,i1,f;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    int vel[n],temp[n]={0};
		double inp[n];
		mx=0,l=120,mn=n;
		stamp = n*l;
		for(i=0;i<n;i++)
        {
            cin>>vel[i];
            inp[i] = i;
        }
        for(i=0;i<n;i++)
        {
            c=0,f=0,temp[i]=1;
            while(f<stamp)//for(i1=0;i1<stamp;i1++)
            {
                for(j=0;j<n;j++)
                {
                    inp[j] += (double)(vel[j])/l;
                }
                for(k=0;k<n;k++)
                {
                    for(m=0;m<n;m++)
                    {
                        if(comp(inp[k],inp[m]) && k!=m)
                        {
                            if(temp[k]+temp[m]>0)
                            {
                                temp[k]=1;
                                temp[m]=1;
                            }
                        }
                    }
                }
                f++;
            }
            for(j=0;j<n;j++)
            {
                if(temp[j]-1==0)
                {
                    c++;
                }
                inp[j] = j;
                temp[j] = 0;
            }
            mx=max(c,mx);
            mn=min(c,mn);
        }
        cout<<mn<<" "<<mx<<endl;
	}
}

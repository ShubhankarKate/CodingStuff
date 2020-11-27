#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
int main()
{
	long long t,n,i,j,k,m,l,flag,res,nu;
    cin>>t;
    while(t--)
    {
        flag=0,l=0;
        cin>>n;
        long long num[n];
        nu = factorial(n);
        long long ind[nu]={0};
        long long index[nu]={0};
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                res=0;
                for(k=i;k<=j;k++)
                {
                    res = res | num[k];
                }
                if(res>0)
                {
                    ind[l] = res;
                    l++;
                }
            }
        }
        sort(ind, ind+nu);
        for(m=0;m<nu;m++)
        {
            if(ind[i] == ind[i+1])
            {
                flag=1;
            }
        }
        if(flag == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

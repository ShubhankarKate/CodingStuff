#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,sum,p,expense,coin,k;
    cin>>t;
    int t1=t;
    int soln[t];
    while(t--)
    {
        sum=5,p=1;
        cin>>n;
        int money[3];
        for(int i=0;i<3;i++)
        {
            money[i]=0;
        }
        for(int i=0;i<n;i++)
        {
            cin>>coin;
            if(i=0)
            {
                if(coin!=5)
                {
                    p=0;
                    break;
                }
                else
                {
                    money[0]++;
                }
            }
            if(i>0)
            {
                if(coin==5)
                {
                    money[0]++;
                }
                if(coin==10)
                {
                    if(money[0]>0)
                    {
                        money[1]++;
                        money[0]--;
                    }
                    else
                    {
                        p=0;
                        break;
                    }
                }
                if(coin==15)
                {
                    if(money[1]>0)
                    {
                        money[1]--;
                        money[2]++;
                    }
                    else
                    {
                        p=0;
                        break;
                    }
                }
            }
        }
        soln[t]=p;
    }
    for(int i=(t1-1);i>=0;i--)
    {
        if(soln[i]==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

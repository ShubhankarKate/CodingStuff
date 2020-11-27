#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p;
    cin>>t;
    int t1=t;
    int soln[t];
    while(t--)
    {
        p=1;
        cin>>n;
        int coin[n];
        int money[3]={0};
        for(int i=0;i<n;i++)
        {
            cin>>coin[i];
            if(i>0)
            {
                if(coin[i]==5)
                {
                    money[0]++;
                }
                else if(coin[i]==10)
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
                else if(coin[i]==15)
                {
                    if(money[1]>0)
                    {
                        money[1]--;
                        money[2]++;
                    }
                    else if(money[0]>1)
                    {
                        money[0]-=2;
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

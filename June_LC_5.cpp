#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,k,n1,p=0;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++)
    {
        cin>>n[i];
    }
    while(t--)
    {
        n1=n[p];
        int sol[n1][n1];
        k=1;
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                if(n1%2==1)
                {
                    sol[i][j]=k;
                    k++;
                }
                else
                {
                    if(i%2==1)
                    {
                        sol[i][n1-j-1]=k;
                        k++;
                    }
                    else
                    {
                        sol[i][j]=k;
                        k++;
                    }
                }
            }
        }
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<n1;j++)
            {
                cout<<sol[i][j]<<" ";
            }
            cout<<endl;
        }
        p++;
    }
}

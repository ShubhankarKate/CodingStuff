#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,j,i,n,k,fin,m,m2,flag;
    cin>>t;
    while(t--)
    {
        k=1;m=0,j=0,flag=0,m2=0;
        cin>>n;
        int a[n]={0},f[n]={0};
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                f[j]++;
            }
            else
            {
                j++;
            }
        }
        sort(f,f+j);
        m = f[j-1];
        for(i=0;i<j;i++)
        {
            if(f[i]==f[j-1])
            {
                flag++;
            }
            if(f[i]<f[j-1])
            {
                m2 = f[i];
            }
        }
        if(flag == 1)
        {
            if(m2 == 0 && m%2==1)
            {
                cout<<"Yes"<<endl;
            }
            else if(m%2==0)
            {
                cout<<"No"<<endl;
            }
            else
            {
                if(m2 >= (m+1)/2)
                {
                    cout<<"No"<<endl;
                }
                else
                {
                    cout<<"Yes"<<endl;
                }
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}

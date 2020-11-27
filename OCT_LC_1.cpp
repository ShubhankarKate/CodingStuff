#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,n,k,sum,f,flag;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        sum = flag = 0;
        f = 1;
        int a;
        for(i=0;i<n;i++)
        {
            cin>>a;
            sum = sum + a;
            if(sum >= k && flag == 0)
            {
                sum = sum - k;
                f++;
            }
            else
            {
                flag = 1;
            }
        }
        if(flag == 0)
        {
            f = f + (sum/k);
            cout<<f<<endl;
        }
        else
        {
            cout<<f<<endl;
        }
    }
}

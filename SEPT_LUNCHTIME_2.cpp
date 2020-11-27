#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,n,k,l,s1,s2;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if((i+1) % a[i] != 0 && a[i] <= (i+1))
            {
                k=1;
            }
        }
        if(k == 0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

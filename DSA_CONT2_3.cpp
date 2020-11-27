#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,m;
    cin>>t;
    while(t--)
    {
        m=n;
        cin>>n;
        int num[n];
        for(i=0;i<n;i++)
        {
            cin>>num[i];
            if(m > num[i])
            {
                m = num[i];
            }
        }
        int itr = *find(num, num + n, m);
        cout<<distance(num, itr)<<" "<<m<<endl;
    }
}

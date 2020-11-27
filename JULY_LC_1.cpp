#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k,fin,i;
    cin>>t;
    while(t--)
    {
        fin=0;
        cin>>n;
        int val[n];
        for(i=0;i<n;i++)
        {
            cin>>val[i];
            if(i>0)
            {
                fin+=abs(val[i]-val[i-1])-1;
            }
        }
        cout<<fin<<endl;
    }
}

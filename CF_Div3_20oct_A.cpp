#include<bits/stdc++.h>
using namespace std;
int numcount(int n)
{
	int x = n%10;
	int num = 0;
	while(n!=0)
	{
		if(n%10 == x)
		{
			num++;
			n = n/10;
		}
	}
	return num;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,i,i1,n,p,x,k,f;
    int c[4] = {1,3,6,10};
    cin>>t;
    while(t--)
    {
    	f = 0;
        cin>>x;
        n = numcount(x);
        k = x%10 - 1;
        f = k * 10 + c[n-1];
        cout<<f<<endl;
    }
}

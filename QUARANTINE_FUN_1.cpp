#include<bits/stdc++.h>
using namespace std;
int num(int n)
{
    int result = 0;
    for(int i=0;i<n;i++)
    {
        result = result*10 + 1;
    }
    return result;
}
int fact(int n)
{
    int res = 1;
    for(int i=1;i<=n;i++)
        res *= i;
    return res;
}
int main()
{
	int t,n,i,flag,numb,fac,fin,val;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n;
        numb = num(n);
        fac = fact(n-1);
        for(i=0;i<n;i++)
        {
            cin>>val;
            flag += val;
        }
        fin = ( fac * flag * numb );
        cout<<fin<<endl;
    }
}

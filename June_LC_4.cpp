#include<bits/stdc++.h>
using namespace std;
long long powers(long long n)
{
    long long flag=1,counter=0;
    while(flag==1)
    {
        if(n%2==0)
        {
            counter++;
            n=n/2;
        }
        else
        {
            flag=0;
        }
    }
    return(counter);
}
int main()
{
    long long t,ts,js,cas,p,l;
    cin>>t;
    long long t1=t;
    long long soln[t];
    while(t--)
    {
        cin>>ts;
        if(ts%2==1)
        {
            cas=ts/2;
        }
        else
        {
            p=powers(ts);
            l=pow(2,p+1);
            cas=ts/l;
        }
        soln[t]=cas;
    }
    for(long long i=(t1-1);i>=0;i--)
    {
        cout<<soln[i]<<endl;
    }
}

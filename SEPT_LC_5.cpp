#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,n,i,s,f,fin,m,res;
    double k,d;
    cin>>t;
    while(t--)
    {
        fin=m=0;
        long long arr[20];
        cin>>n;
        for(i=0;i<=20;i++)
        {
            cout<<i+1<<" "<<pow(2,i+1)<<endl;
            cout.flush();
            cin>>arr[i];
        }
        s=arr[19]-n*pow(2,20);
        for(i=19;i>0;i--)
        {
            if(arr[i] >= s)
            {
                arr[i] = ((n-(arr[i]-s))/(pow(2,i+1)))/2;
            }
        }
        for(i=19;i>0;i--)
        {
            if(arr[i]&1==1)
            {
                fin += pow(2,i+1);
            }
            if(s&1==1)
            {
                fin=fin+1;
            }
            cout<<2<<" "<<fin<<endl;
            cout.flush();
            cin>>res;
            if(!res)
            {
                break;
            }
            cout<<endl;
            cout<<flush;
        }
    }
}

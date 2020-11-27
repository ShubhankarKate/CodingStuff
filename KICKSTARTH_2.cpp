#include<bits/stdc++.h>
using namespace std;
long long power(long long n, long long k)
{
    long long res = 1;
    for(int i=0;i<n;i++)
    {
        res = res*k;
    }
    return res;
}
int digit_num(long long n)
{
    int res = 0;
    while(n!=0)
    {
        n = n/10;
        res++;
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,t1,i,n,l,r,fin,dl,dr,c;
    //int odd[5] = {1,3,5,7,9};
    //int even[5] = {0,2,4,6,8};
    cin>>t;
    t1=t;
    while(t--)
    {
        fin = 0;
        cin>>l>>r;

        dl = digit_num(l);
        dr = digit_num(r);

        int fl = l % (power(dl-1,10));
        int fr = r % (power(dr-1,10));

        if(l==r)
        {
            fin = 0;
        }
        else
        {
            while(abs(dl - dr) > 1)
            {
                if(l<r)
                {
                    fin = fin + power(++dl,5);
                }
                else if(l>r)
                {
                    fin = fin + power(++dr,5);
                }
            }
        }

        for(i=0;i<nl;i++)
        {
            if(((i+1)%2)==0)
            {
                if((a[i]%2)==1)
                {
                    c = c + ((9-a[i])/2)* (unsigned long long int)(pow(5,nl-1-i));
                }
                else
                {
                    c = c + ((9-1-a[i])/2) * (unsigned long long int)(pow(5,nl-1-i));
                }
            }
            else
            {
                if((a[i]%2)==0)
                {
                    c = c + ((8-a[i])/2) * (unsigned long long int)(pow(5,nl-1-i));
                }
                else
                {
                    c = c + ((9-a[i])/2) * (unsigned long long int)(pow(5,nl-1-i));
                }
            }
        }

        cout<<"Case #"<<(t1-t)<<": "<<fin<<endl;
    }
}

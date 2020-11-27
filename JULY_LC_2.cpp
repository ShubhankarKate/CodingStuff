#include<bits/stdc++.h>
using namespace std;
long long cpt(long long x)
{
    long long sum=0;
    while(x!=0)
    {
        sum=sum+(x%10);
        x=x/10;
    }
    return sum;
}
int main()
{
	long long t,n,chef,morty,i,fin,p1,p2,val;
    cin>>t;
    while(t--)
    {
        fin=chef=morty=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>p1>>p2;
            if(cpt(p1)>cpt(p2))
            {
                chef++;
            }
            else if(cpt(p1)<cpt(p2))
            {
                morty++;
            }
            else
            {
                chef++;
                morty++;
            }
        }
        if(chef>morty)
        {
            fin=chef;
            val=0;
        }
        else if(chef<morty)
        {
            fin=morty;
            val=1;
        }
        else
        {
            fin=chef;
            val=2;
        }
        cout<<val<<" "<<fin<<endl;
    }
}

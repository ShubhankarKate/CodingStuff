#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,a,b,c,l,r,m,mr,dl,du,k,i,j;
    cin>>t;
    while(t--)
    {
        a=b=c=0;
        cin>>l>>r>>m;
        mr = m;
        for(j=l;j<=r;j++)
        {
            mr = m;
            k = mr%j;
            if(mr<j)
            {
                k = k-j ;
            }
            if(k>=(l-r) && k<=(r-l))
            {
                b = c+abs(i);
                c = l;
            }
            else
            {
                b = l;
                c = b+abs(i);
            }
        }
        /*dl = l-r;
        du = r-l;
        for(i=dl;i<=du;i++)
        {
            for(j=l;j<=r;j++)
            {
                mr = m;
                mr -= i;
                if(mr%j == 0 && mr/j > 0)
                {
                    a = j;
                    if(i>=0)
                    {
                        b = c+abs(i);
                        c = l;
                    }
                    else
                    {
                        b = l;
                        c = b+abs(i);
                    }
                }
            }
        }*/
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
}

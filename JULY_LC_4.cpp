/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,i,fx,fy;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=4*n-1;
        long long x[k],cx[]={0};
        long long y[k],cy[]={0};
        for(i=0;i<k;i++)
        {
            cin>>x[i]>>y[i];
            ++cx[x[i]-1];
            ++cy[y[i]-1];
            //cout<<cx[x[i]-1]<<endl;
            //cout<<cy[y[i]-1]<<endl;
            if(cx[x[i]-1]%2==1)
            {
                fx=x[i];
                //cout<<fx<<endl;
            }
            if(cy[y[i]-1]%2==1)
            {
                fy=y[i];
                //cout<<fy<<endl;
            }
        }
        cout<<fx<<" "<<fy<<endl;
    }
}*/





#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,n,k,i,flagx,flagy,cox,coy;
    cin>>t;
    while(t--)
    {
        cin>>n;
        flagx=flagy=0;
        cox=coy=1;
        k=4*n-1;
        long long x[k],cx;
        long long y[k],cy;
        for(i=0;i<k;i++)
        {
            cin>>x[i]>>y[i];
        }
        sort(x,x+k);
        sort(y,y+k);
        for(i=1;i<(k);i++)
        {
            if(x[i]!=x[i-1])
            {
                if(cox%2==1)
                {
                    flagx=1;
                    cx=x[i-1];
                }
                cox=1;
            }
            else
            {
                cox++;
            }
            if(y[i]!=y[i-1])
            {
                if(coy%2==1)
                {
                    flagy=1;
                    cy=y[i-1];
                }
                coy=1;
            }
            else
            {
                coy++;
            }
        }
        if(flagx==0)
        {
            cx=x[k-1];
        }
        if(flagy==0)
        {
            cy=y[k-1];
        }
        cout<<cx<<" "<<cy<<endl;
    }
}


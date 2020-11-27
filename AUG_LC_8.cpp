#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,j,k,flag,m,n,c,x,y,in=0,tri=0;
        //scanf("%d %d %d", &n, &c, &k);
        cin>>n>>c>>k;
        int a1[n], b1[n],c1[n],line[c]={0},cost[c]={0};
        for(i=0;i<n;i++)
        {
            //scanf("%d %d", &a1[i], &b1[i]);
            cin>>a1[i]>>b1[i];
            if((n<=10) && (k<=100))
            {
                flag=1;
            }
            //scanf("%d", &x);
            cin>>x;
            c1[i]=x;
            line[x]++;
        }
        for(j=0;j<c;j++)
        {
            cin>>cost[i];
            if(i==0)
            {
                x=cost[i];
            }
            //scanf("%d", &cost[i]);
            if(cost[i]!=x)
            {
                flag=2;
            }
        }
        if(flag==1)
        {

        }
        if(flag==2)
        {
            for(i=0;i<c;i++)
            {
                if(line[i]>2)
                {
                    tri=tri+((line[i]*(line[i]-1)*(line[i]-2))/6);
                }
            }
            while(k>0)
            {
                sort(line,line+c);
                for(i=0;i<c;i++)
                {
                    if(line[i]>m)
                    {
                        m=line[i];
                        in=i;
                    }
                }
                k=k-cost[in];
                line[in]=line[in]-1;
                tri=tri-((line[i]*(line[i]-1))/2);
            }
        }
    }
    return(0);
}

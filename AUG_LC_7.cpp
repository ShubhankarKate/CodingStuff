#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,i,j,n,c,co,a1,b1,c1,k,l,tri=0,temp=0;
    cin>>t;
    while(t--)
    {
        co=1,tri=0;
        cin>>n>>c>>k;
        long long A[n],B[n],C[c]={0},V[c];
        for(i=0;i<n;i++)
        {
            cin>>A[i]>>B[i]>>c1;
            C[c1-1]++;

        }
        for(i=0;i<c;i++)
        {
            cin>>V[i];
        }
        l = k/V[0];
        sort(C,C+c);
        if(c==1)
        {
            temp = C[0] - l;
            tri = ((temp)*(temp-1)*(temp-2))/6;
        }
        else
        {
            while(l!=0)
            {
                C[c-1]--;
                sort(C,C+c);
                l = l-1;
            }
            for(i=0;i<c;i++)
            {
                if(C[i]>2)
                {
                    tri=tri+(((C[i])*(C[i]-1)*(C[i]-2))/6);
                }
            }
        }
        cout<<tri<<endl;
    }
}








/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,n,c,co,a1,b1,c1,k,l,tri,temp;
	cin>>t;
    while(t--)
    {
        co=1,tri=0;
        cin>>n>>c>>k;
        long long A[n],B[n],C[c]={0},V[c];
        for(i=0;i<n;i++)
        {
            cin>>A[i]>>B[i]>>c1;
            C[c1-1]++;

        }
        for(i=0;i<c;i++)
        {
            cin>>V[i];
        }
        l = k/V[0];
        for(i=0;i<c;i++)
        {
            if(C[i]>2)
            {
                tri=tri+((C[i]*(C[i]-1)*(C[i]-2))/6);
            }
        }
        sort(C,C+c);
        j = c-1;
        if(c==1)
        {
            temp = C[0] - l;
            tri = (temp*(temp-1)*(temp-2))/6;
        }
        else
        {
            while(l>0)
            {
                if( (C[j]-C[j-1])*co <= l && C[j]>2)
                {
                    /*for( i = 1 ; i <= ( C[j] - C[j-1] ) ; i++ )
                    {
                        temp = (C[j]-i);
                        tri = tri - ( (temp*(temp-1))/2 )*co;
                    }
                    l = l - (C[j]-C[j-1])*co;
                    C[j] = C[j]
                    co++;
                    j--;
                }
                else if( (C[j]-C[j-1])*co > l && C[j] > 2 )
                {
                    co=l;
                    temp = (C[j]-i);
                    tri = tri - ( (temp*(temp-1))/2 )*co;
                }
            }
        }
        for(i=0;i<c;i++)
        {
            if(C[i]>2)
            {
                tri=tri+((C[i]*(C[i]-1)*(C[i]-2))/6);
            }
        }
        cout<<tri<<endl;
    }
}*/

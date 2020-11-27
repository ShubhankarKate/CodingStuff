#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,t,n,p,lt,ht,he,le,k,k1,w,counter = 1e9 + 7;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>w;
        k1=k;
        long long L[2*n],Lf[2*n],H[n]={0},P[n];
        long long l[4],h[4];

        //input
        for(i=0;i<k;i++)
        {
            cin>>L[i];
        }
        for(i=0;i<4;i++)
        {
            cin>>l[i];
        }
        for(i=0;i<k;i++)
        {
            cin>>H[i];
        }
        for(i=0;i<4;i++)
        {
            cin>>h[i];
        }

        //reccurence reln
        while(k1<n)
        {
            L[k1] = ( ( l[0]*L[k1-2] + l[1]*L[k1-1] + l[2] ) % l[3] ) + 1;
            H[k1] = ( ( h[0]*H[k1-2] + h[1]*H[k1-1] + h[2] ) % h[3] ) + 1;
            k1++;
        }

        //add endings
        for(i=n;i<2*n;i++)
        {
            L[i] = L[i-n] + w;
        }
        sort(L,L+2*n);

        //remove redundancies
        j = 0;
        for (i=0; i < 2*n-1; i++)
        {
            if(L[i]==0)
            {
                continue;
            }
            else if (L[i] != L[i+1])
            {
                Lf[j++] = L[i];
            }
        }
        Lf[j++] = L[2*n-1];

        for(i=0;i<j;i++)
        {
            cout<<Lf[i]<<" ";
        }
        cout<<endl;

        //perimeter calc
        /*P[0] = (2*w+H[0]);
        he = H[0];
        for(i=1;i<n;i++)
        {
            p = 2*(w+H[i]);
            if(H[i] >= H[i-1])
            {
                he= max(he, H[i]);
            }
            else
            {

            }
            le = L[i] + w - L[i+1];
            P[i] = P[i-1]2*(he + le);
        }
        for(i=0;i<n;i++)
        {
            cout<<P[i]<<" ";
        }
        cout<<endl;*/
    }
}

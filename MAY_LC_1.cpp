#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,k,max,min;
    cin>>t;
    while(t--)
    {
        k=1,max=0,min=10;
        cin>>n;
        int p[n];
        for(int i=0;i<n;i++)
        {
            cin>>p[i];
        }
        for(int i=0;i<n;i++)
        {
            int clas=abs(p[i+1]-p[i]);
            if(clas<=2)
            {
                k++;
            }
            else
            {
                if(k>=max)
                {
                    max=k;
                }
                if(k<=min)
                {
                    min=k;
                }
                k=1;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
}

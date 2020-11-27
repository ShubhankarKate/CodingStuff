#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,n,r,c;
    while(t<=25)
    {
        cin>>n;
        if(n==1)
        {
            if(t%5 == 0)
            {
                r=t/5;
                c = 5;
            }
            else
            {
                r = (t/5)+1;
                c = t%5;
            }
        }
        t++;
    }
    cout<<( abs(r-3) + abs(c-3) )<<endl;
}

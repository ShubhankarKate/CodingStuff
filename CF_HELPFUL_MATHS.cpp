#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,k,i,n,r,c;
    string s;
    while(t--)
    {
        k=0;
        cin>>s;
        n = s.length();
        int a[(n/2)+1];
        if(n==1)
        {
            cout<<s<<endl;
        }
        else
        {
            for( i = 0 ; i < n ; i += 2)
            {
                a[k] = s[i]-48;
                k++;
            }
            sort(a,a+(n/2 + 1));
            for(i=0;i<k-1;i++)
            {
                cout<<a[i]<<"+";
            }
            cout<<a[k-1]<<endl;
        }
    }
}

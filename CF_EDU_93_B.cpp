#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,k,c,l,f,al;
	string n,n1;
    cin>>t;
    while(t--)
    {
        k=c=l=al=0;
        cin>>n;
        n1 = n + "2";
        int a[100]={0};
        for(i=0;i<n1.length();i++)
        {
            if(n1[i] == '1')
            {
                c++;
            }
            else if(n1[i] == '0' && n1[i+1] == '0')
            {
                continue;
            }
            else
            {
                a[k] = c;
                c=0;
                k++;
            }
        }
        f=k%2;
        sort(a,a+k);
        for(i=k-1;i>=0;i--)
        {
            if(f==0)
            {
                if(i%2 == 1)
                {
                    al = al + a[i];
                }
            }
            else if(f==1)
            {
                if(i%2 == 0)
                {
                    al = al + a[i];
                }
            }
        }
        cout<<al<<endl;
    }
}

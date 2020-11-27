#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t,t1,i,i1,f,k,j,j1,fin;
    string s;
    cin>>t;
    t1=t;
    while(t--)
    {
        j=j1=fin=0;
        cin>>s;
        k = s.length();
        s[k+1] = 'A';
        k++;
        int a[k]={0},b[k]={0};
        for(i = 0; i < k-4 ; i++)
        {
            if(s[i] == 'K' && s[i+1] == 'I' && s[i+2] == 'C' && s[i+3] == 'K')
            {
                a[j] = i+1;
                j++;
            }
        }
        for(i = 0; i < k-5 ; i++)
        {
            if(s[i] == 'S' && s[i+1] == 'T' && s[i+2] == 'A' && s[i+3] == 'R' && s[i+4] == 'T')
            {
                b[j1] = i+1;
                j1++;
            }
        }

        /*for(i = 0; i < j; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

        for(i = 0; i < j1; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;*/

        for(i = 0; i < j; i++)
        {
            for(i1 = 0; i1 < j1; i1++)
            {
                if(a[i]<b[i1])
                {
                    fin++;
                }
            }
        }
        cout<<"Case #"<<(t1-t)<<": "<<fin<<endl;
    }
}

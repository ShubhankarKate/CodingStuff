#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=1,i,j,index;
    string n;
    while(t--)
    {
        index = -1;
        cin>>n;
        for(i =0; i<n.length();i++)
        {
            if(n[i] == '0')
            {
                index = i;
                break;
            }
        }
        if(index == -1)
        {
            for(j = 1;j<n.length();j++)
            {
                cout<<n[j];
            }
        }
        else
        {
            for(j = 0;j<n.length();j++)
            {
                if( j != index )
                {
                    cout<<n[j];
                }
            }
        }
    }
}

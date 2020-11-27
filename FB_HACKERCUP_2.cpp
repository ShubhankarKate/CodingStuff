#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("alchemy_input.txt","r",stdin);
        freopen("alchemy_output.txt","w",stdout);
    #endif // ONLINE_JUDGE
	int t,n,i,k1,k2,t1;
	string inp,flag;
    cin>>t;
    t1=t;
    while(t--)
    {
        k1=0,k2=0;
        cin>>n;
        cin>>inp;
        for(i=0;i<n;i++)
        {
            flag = inp[i];
            if(flag == "A")
            {
                k1++;
            }
            else if(flag == "B")
            {
                k2++;
            }
        }
        cout<<"Case #"<<(t1-t)<<":\n";
        if(abs(k1-k2) == 1)
        {
            cout<<"Y"<<endl;
        }
        else
        {
            cout<<"N"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,k,i,j,flag,r,c,c1;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>k;
        r=(k/8)+1;
        c=k%8;
        c1=c+1;
        for(i=1;i<=8;i++)
        {
            if(flag==0)
            {
                cout<<"O";
                flag++;
            }
            for(j=1;j<=8;j++)
            {
                if(flag==1)
                {
                    j++;flag++;
                    if(r==1)
                    {
                        c--;
                    }
                }
                if(i>r+1 || i<r)
                {
                    cout<<".";
                }
                else if(i==r)
                {
                    if(c>0)
                    {
                        cout<<".";
                        c--;
                    }
                    else
                    {
                        cout<<"X";
                    }
                }
                else if(i==r+1)
                {
                    if(c1>0)
                    {
                        cout<<"X";
                        c1--;
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }
            cout<<endl;
        }
    }
}

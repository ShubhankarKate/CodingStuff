#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,k,d0,d1,sum,fin,val,rem,i,l;
    cin>>t;
    while(t--)
    {
        fin=0;
        cin>>k>>d0>>d1;
        sum=d0+d1;
        l=(k-3)/4;
        rem=(2*sum)%10 + (4*sum)%10 +(8*sum)%10 + (6*sum)%10;
        if(k==2)
        {
            fin=sum;
        }
        else
        {
            fin+= sum+(sum%10)+(rem*l);
            val=sum*2;
            for(i=0;i<((k-3)%4);i++)
            {
                //val=pow(2,i);
                fin+=val%10;
                val*=2;
            }
        }
        //cout<<fin<<endl;
        if(fin%3==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=1,n,flag,a,b,f,i;
	string exp;
    while(t--)
    {
        f =0,flag=0;
        cin>>exp;
        int numbers[10] = {0,1,2,3,4,5,6,7,8,9};
        for(i=0;i<3;i++)
        {
            n = (int)exp[i];
            if(isdigit(exp[i]))
            {
                if(f==0)
                {
                    a = numbers[n-48];
                    f++;
                }
                else
                {
                    b = numbers[n-48];
                }
            }
            else if(exp[i] == '+')
            {
                flag = 1;
            }
            else if(exp[i] == '-')
            {
                flag = 2;
            }
        }
        if(flag == 1)
        {
            cout<<a+b<<endl;
        }
        else if(flag == 2)
        {
            cout<<a-b<<endl;
        }
    }
}

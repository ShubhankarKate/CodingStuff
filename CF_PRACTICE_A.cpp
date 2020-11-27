#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=1,i,l,r,nums,fins,flag,f,k,n;
    while(t--)
    {
        l=r=k=nums=fins=f=flag=0;
        cin>>n;
        int num[n],fin[n];
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(i = 0;i<n;i++)
        {
            nums = nums + i+1;
            fins = fins + num[i];
            if(f == 0)
            {
                if( nums != fins )
                {
                    l = i;
                    f++;
                }
            }
            else if (f==1)
            {
                if( nums == fins )
                {
                    r = i;
                    f++;
                }
            }
            else if (f==2)
            {
                if(nums != fins)
                {
                    flag = 1;
                    break;
                    f++;
                }
            }
        }
        //cout<<l<<" "<<r<<endl;
        for(i = l;i<=r;i++)
        {
            if( l==0 && r==0 )
            {
                flag = 1;
                break;
            }
            fin[k] = num[i];
            //cout<<fin[k]<<" ";
            k++;
        }
        //cout<<endl;
        //cout<<k<<endl;
        if( flag == 0 )
        {
            for(i=0;i<k-1;i++)
            {
                //cout<<fin[i] - fin[i+1]<<endl;
                if(fin[i] - fin[i+1] != 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 0)
        {
            cout<<fin[k-1]<<" "<<fin[0]<<endl;
        }
        else
        {
            cout<<"0 0"<<endl;
        }
    }
}









/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=1,i,l,r,flag,f,k,n;
    while(t--)
    {
        l=r=k=f=flag=0;
        cin>>n;
        int num[n],fin[n];
        for(i=0;i<n;i++)
        {
            cin>>num[i];
        }
        for(i = 0;i<n;i++)
        {
            if(num[i] != num[i+1] && num[i+1] - num[i] == 1)
            {
                flag =1;
                break;
            }
            else
            {
                if(num[i] == i+1)
                {
                    if(num[i+1] != i+2)
                    {
                        if(f==0)
                            l = i+1;
                        f++;
                    }
                }
                if(num[i+1] == i+2)
                {
                    if(i == n-1)
                    {
                        r = n-1;
                    }
                    else if(num[i] != i+1)
                    {
                        r = i;
                    }
                }
            }
        }
        cout<<l<<" "<<r<<endl;
        for(i = l;i<=r;i++)
        {
            fin[k] = num[i];
            cout<<fin[k]<<" ";
            k++;
        }
        cout<<endl;
        cout<<k<<endl;
        for(i=0;i<k-1;i++)
        {
            cout<<fin[i] - fin[i+1]<<endl;
            if(fin[i] - fin[i+1] != 1)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            cout<<fin[k-1]<<" "<<fin[0]<<endl;
        }
        else
        {
            cout<<"0 0"<<endl;
        }
    }
}
*/

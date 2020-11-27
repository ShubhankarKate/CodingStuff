#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t,i,j,c,d,month;
    int m[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    string mon[12] = {"january", "february", "march", "april", "may", "june", "july", "august", "september", "october", "november", "december"};
    string s;
    cin>>t;
    while(t--)
    {
        c = 183;
        cin>>d;
        cin>>s;
        if(s == "january")
        {
            month = 0;
        }
        else if(s == "february")
        {
            month = 1;
        }
        else if(s == "march")
        {
            month = 2;
        }
        else if(s == "april")
        {
            month = 3;
        }
        else if(s == "may")
        {
            month = 4;
        }
        else if(s == "june")
        {
            month = 5;
        }
        else if(s == "july")
        {
            month = 6;
        }
        else if(s == "august")
        {
            month = 7;
        }
        else if(s == "september")
        {
            month = 8;
        }
        else if(s == "october")
        {
            month = 9;
        }
        else if(s == "november")
        {
            month = 10;
        }
        else
        {
            month = 11;
        }
        c = c - (m[month] - d);
        j=month+1;
        while(c>m[j%12])
        {
            c = c - m[j%12];
            j++;
        }
        cout<<c<<" "<<mon[j%12]<<endl;
    }
}

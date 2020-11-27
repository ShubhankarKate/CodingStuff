#include<bits/stdc++.h>
#include<string>
using namespace std;
string s="cbdae";
void ascOrder(string a)
{
    sort(a.begin(), a.end());
    cout<<a<<endl;
}
int main()
{
    /*char key[50];int n=300000;
    cout<<"Enter a string"<<endl;
    cin>>key;
    cout<<"This is the string: "<<key<<endl;
    cout<<strlen(key)<<endl;
    cout<<n<<endl;
    int k=strcmp(key[0],"a");
    cout<<k<<endl;*/
    int k=s.length();
    cout<<s[1]<<endl;
    //string s1=s.substr(1,3);
    string s1=s;
    sort(s1.begin(), s1.end());
    //ascOrder(s1);
    cout<<k<<" "<<s1<<endl;
}

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define SQ(a) (a)*(a)
ll m=1000000007;
vector< pair<ll,ll> > PrimeFactors(ll n)
{
    vector< pair<ll,ll> > factors;
    ll i=2;
    ll cnt=0;
    while(i<=sqrt(n) && n>1)
    {
        if(n%i==0)
        {
            n=n/i;
            cnt++;
        }
        else
        {
            if(cnt!=0)
            {
                factors.PB({i,cnt});
                cnt=0;
            }
            i++;
        }
    }
    if(cnt!=0)
    {
        factors.PB({i,cnt});
    }
    if(n!=1)
    {
        if(factors.size() && factors.back().first!=n)
        {
            factors.PB({n,1});
        }
        else if(factors.size())
        {
            factors.back().second++;
        }
        else
        {
            factors.PB({n,1});
        }
    }
    return factors;
}
bool isPrime(ll a)
{
    if(a==1)
    {
        return false;
    }
    else if(a==2)
    {
        return true;
    }
    else if(a%2==0)
    {
        return false;
    }
    else
    {
        for(int i=3;i<=sqrt(a);i+=2)
        {
            if(a%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
// time complexity is Nlog(logN) approx N
vector<ll> nPrimes(ll a)
{
    vector<ll> primes;
    ll Primes[a+1]={0};
    Primes[0]=0;
    Primes[1]=0;
    Primes[2]=1;
    primes.PB(2);
    for(int i=3;i<=a;i+=2)
    {
        Primes[i]=1;
    }
    for(int i=3;i<=a;i+=2)
    {
        if(Primes[i]==1)
        {
            primes.PB(i);
            for(int j=i*i;j<=a;j+=i)
            {
                Primes[j]=0;
            }
        }
    }
    return primes;
}
string toString(char x)
{
    string s(1, x);
    return s;
}
ll fact(ll n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return (n%m*fact(n-1)%m)%m;
    }
}
ll pow1(ll x,ll y)
{
    ll temp;
    if( y == 0)
        return 1;
    temp = pow1(x, y/2);
    if (y%2 == 0)
        return (temp%m*temp%m)%m;
    else
        return ((x%m*temp%m)%m*temp%m)%m;
}
// usefull for multiple Queries uses seive method
vector< pair<ll,ll> > factorize(ll n,vector<ll> &Primes)
{
    vector< pair<ll,ll> > factors;
    ll i=0;
    ll p = Primes[i];
    ll cnt=0;
    while(p*p<=n)
    {
        if(n%p==0)
        {
            while(n%p==0)
                {
                    n=n/p;
                    cnt++;
                }
            factors.PB({p,cnt});
        }
        else
        {
            cnt=0;
            i++;
            p=Primes[i];
        }
    }
    if(n!=1)
    {
        factors.PB({n,1});
    }
    return factors;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE
           freopen("FB_4_input.txt","r",stdin);
           freopen("FB_4_output.txt","w",stdout);
    #endif
    ll counter=1;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll c[n];
        ll maxcount=0,count=0,flag=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>c[i];
            if(c[i]==0 && flag==0 && i!=0)
            {
                flag=1;
                count++;
            }
            else if(c[i]==0 && i!=0)
            {
                count++;
            }
            else
            {
                maxcount=max(maxcount,count);
                count=0;
                flag=0;
            }
        }
        flag=0;
        if(n==m)
        {
            ans=0;
            flag=1;
        }
        else if(maxcount>=m)
        {
            ans=-1;
            flag=1;
        }
        else if(m==1)
        {

        }
        if(flag==1)
        {
            cout<<"Case #"<<counter<<":"<<" ";
            counter++;
            cout<<ans<<"\n";
        }
        else
        {
            ll dp[n]={0};
            deque<ll> Qi;
            ll i;
            ll k=m;

            for (i = 0; i < k; ++i)
            {
                // For every element, the previous larger elements are useless so
                // remove them from Qi
                if(c[i]==0)
                {
                    c[i]=1000000009;
                }
                c[0]=0;
                c[i]=c[i]+dp[i];
                while ((!Qi.empty()) && c[i] < c[Qi.back()])
                    Qi.pop_back(); // Remove from rear

                // Add new element at rear of queue
                Qi.push_back(i);
            }
            // Process rest of the elements, i.e., from c[k] to c[n-1]
            for (; i < n; ++i)
            {

                // The element at the front of the queue is the smallest element of
                // previous window, so print it
                // cout<<c[Qi.front()];
                if(c[i]==0)
                {
                    c[i]=1000000009;
                }
                dp[i]=c[Qi.front()];
                c[i]=c[i]+dp[i];
                // Remove the elements which are out of this window
                while ((!Qi.empty()) && Qi.front() <= i - k)
                    Qi.pop_front(); // Remove from front of queue

                // Remove all elements larger than the currently
                // being added element (remove useless elements)
                while ((!Qi.empty()) && c[i] < c[Qi.back()])
                    Qi.pop_back();

                // Add current element at the rear of Qi
                Qi.push_back(i);
            }
            // last windows smallest element
            // cout<<c[Qi.front()]<<"\n";
            ans=dp[n-1];
            cout<<"Case #"<<counter<<":"<<" ";
        counter++;
        cout<<ans<<"\n";
        }
    }
    return 0;
}
//  important Points
// {
    // sum of n num. in AP starting with a ending with b = n*(a+b)/2
    //sum of n num. in GP starting with a ending with b with factor k = b*k-a/(k-1)

    // lower_bound(array,array+n,key)-array; returns the index whose value is atleast key
    // upper_bound(array,array+n,key)-array; returns the index whose value is atleast greater than key;

    // pop_back() removes the last element of a vector;
    // substr(starting index,no of elements); gives the substring of a string;

    // unordered_map/set do things on O(1) while map/set in O(logn)

    /*set<data_type> s;
    s.insert(data);
    s.count(data); 1 if present 0 if not
    s.erase(data); removes the data
    s.size(); gives the size
    to iterate we need to use for(auto x : s)*/

    /*map<key,value> m;
    m[key]=value; inserts into map
    m[key]; returns the value if exists
    m.count(key) if > 0 means the key exists;
    m.size(); size of map*/

    /*bitset<size> s(string); takes the binary string from right to left that is if 1010 is written then s[0] is 0 and s[1] is 1;
    bit operators can be directly used on them
    s.count() gives no. of 1 in the array*/

    /*deque<datatype> d; maintain a dynamic array with front and back pointers with add and remove from both ends
    d.push_back(data);
    d.push_front(data);
    d.pop_back(data);
    d.pop_front(data);
    d.front();
    d.back();*/

    /*priority_queue<datatype> pq; always has the largest element on top
    pq.push(data);
    pq.top();
    pq.pop();
    to make it in increasing order we use priority_queue<datatype,vector<datatype>,greater<datatype>> pq;*/
// }

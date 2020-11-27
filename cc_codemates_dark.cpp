#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int L=1e5+7;
int size_of_base;
std::vector<int> baseArray(L);
std::vector<int> seg(4*L);
std::vector<int> lazy(4*L, 1);

int findSUM(int a, int b)
{
	int SUM = a + b;
	return SUM;
}
void build(int start = 1, int end = size_of_base, int index = 1)
{
	if( start == end )
	{
		seg[index] = baseArray[start];
		return;
	}
	int mid = (start + end)/2;
	build(start, mid, 2*index);
	build(mid+1, end, 2*index + 1);
	seg[index] = findSUM(seg[2*index], seg[2*index + 1]);
	return;
}

void lazyUpdate(int start, int end, int index)
{
	if(lazy[index] != 1)
	{
		seg[index] *= lazy[index];
		if(start != end)
		{
			lazy[2*index] *= lazy[index];
			lazy[(2*index) + 1] *= lazy[index];
		}
		lazy[index] = 1;
	}
	return;
}
void updateRange(int l, int r, int value, int start = 1, int end = size_of_base, int index = 1)
{
	lazyUpdate(start, end, index);
	if(r < start || l > end || start > end )return;
	if( l <= start && r >= end )
	{
		seg[index] *= value;
		if(start != end)
		{
			lazy[2*index] *= value;
			lazy[2*index + 1] *= value;
		}
		return;
	}

	int mid = (start + end)/2;
	updateRange(l, r, value, start, mid, 2*index );
	updateRange(l, r, value, mid+1, end, 2*index + 1);
	seg[index] = findSUM(seg[2*index], seg[2*index + 1]) ;
	return;
}

// [l,r] represent the query range
int query(int l, int r, int start = 1, int end = size_of_base, int index = 1)
{
	lazyUpdate(start, end, index);
	if( start > r || end < l || start > end)
	{
		return 1;
	}
	if(start >= l && end <= r)
	{
		return seg[index];
	}
	int mid = (start + end)/2, query_left, query_right;
	query_left = query(l, r, start, mid, 2*index );
	query_right = query(l, r, mid+1, end, 2*index + 1);
	return findSUM(query_left, query_right);
}
int main()
{
	int q, idx, value, l, r;
	string S;
	cin >> size_of_base;
	for (int i = 1; i <= size_of_base; ++i)
	{
		cin >> baseArray[i];
	}
	build();
	cin >> q;
	while( q-- )
	{
		cin >>S;
		if( S[1] == 'r' )
		{
			cin >> l >> r;
			//l--,r--;
			cout << query(l-1, r-1) << endl;
		}
		else if( S[1] == 'a' )
		{
			cin >> l >> r >> value;
			//l--,r--;
			updateRange(l-1, r-1, value);
		}
	}
	return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1,j,i,n,l,fin,r,q;
    string s;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        long long h[n],h1[n]={0},sum[n];
        for(i=0;i<n;i++)
        {
            cin>>h[i];
            if(i==0)
            {
                sum[i] = h[i];
            }
            else
            {
                sum[i] = sum[i-1] + h[i];
            }
        }
        cin>>q;
        while(q--)
        {
            fin=0;
            cin>>s;
            cin>>l>>r;
            if(s[1]=='a')
            {
                h1[r-1] += l;
            }
            else
            {
                for(i=l-1;i<r;i++)
                {
                    fin += h1[i];
                }
                if(l==1)
                {
                    cout<<fin+sum[r-1]<<endl;
                }
                else
                {
                    cout<<fin+sum[r-1]-sum[l-2]<<endl;
                }
            }
        }
    }
}
*/

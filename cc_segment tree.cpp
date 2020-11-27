#include <bits/stdc++.h>
using namespace std;

int getMid(int s, int e) { return s + (e -s)/2; }
int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
{
	if (qs <= ss && qe >= se)
		return st[si];

	if (se < qs || ss > qe)
		return 0;

	int mid = getMid(ss, se);
	return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
		getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
}

void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
{
	if (i < ss || i > se)
		return;

	if (se != ss)
	{
		int mid = getMid(ss, se);
		updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
		updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
	}
}

void updateValue(int arr[], int *st, int n, int i, int new_val)
{
	if (i < 0 || i > n-1)
	{
		cout<<"Invalid Input";
		return;
	}

	int diff = new_val - arr[i];
	arr[i] = new_val;

	updateValueUtil(st, 0, n-1, i, diff, 0);
}

int getSum(int *st, int n, int qs, int qe)
{
	if (qs < 0 || qe > n-1 || qs > qe)
	{
		cout<<"Invalid Input";
		return -1;
	}

	return getSumUtil(st, 0, n-1, qs, qe, 0);
}
int constructSTUtil(int arr[], int ss, int se, int *st, int si)
{
	if (ss == se)
	{
		st[si] = arr[ss];
		return arr[ss];
	}

	int mid = getMid(ss, se);
	st[si] = constructSTUtil(arr, ss, mid, st, si*2+1) +
			constructSTUtil(arr, mid+1, se, st, si*2+2);
	return st[si];
}

int *constructST(int arr[], int n)
{
	int x = (int)(ceil(log2(n)));
	int max_size = 2*(int)pow(2, x) - 1;
	int *st = new int[max_size];
	constructSTUtil(arr, 0, n-1, st, 0);
	return st;
}

int main()
{
    long long t=1,j,i,n,l,fin,r,q;
    string s;
    //cin>>t;
    while(t--)
    {
        cin>>n;
        long long h[n];
        for(i=0;i<n;i++)
        {
            cin>>h[i];
        }
        long long *st = constructST(h, n);
        cin>>q;
        while(q--)
        {
            fin=0;
            cin>>s;
            cin>>l>>r;
            if(s[1]=='a')
            {
                updateValue(h, st, n, r-1, l+h[r-1]);
            }
            else
            {
                cout<<getSum(st, n, l-1, r-1)<<endl;
            }
        }
    }
}

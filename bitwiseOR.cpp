#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int MSBPosition(long long int N)
{
    int msb_p = -1;
    while (N) {
        N = N >> 1;
        msb_p++;
    }
    return msb_p;
}

long long int findBitwiseOR(long long int L, long long int R)
{
    long long int res = 0;

    int msb_p1 = MSBPosition(L);

    int msb_p2 = MSBPosition(R);

    while (msb_p1 == msb_p2) {
        long long int res_val = (1 << msb_p1);

        res += res_val;

        L -= res_val;
        R -= res_val;

        msb_p1 = MSBPosition(L);
        msb_p2 = MSBPosition(R);
    }
    msb_p1 = max(msb_p1, msb_p2);

    for (int i = msb_p1; i >= 0; i--) {
        long long int res_val = (1 << i);
        res += res_val;
    }
    return res;
}
int main()
{
	ll x,y,o;
	cin>>x>>y;
	o = x | y;
	cout << findBitwiseOR(x, y) << " " << o <<endl;
	return 0;
}

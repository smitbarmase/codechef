#include <bits/stdc++.h>
using namespace std;

#define int long long
#define f(i, n) for (int i = 0; i < n; i++)
#define setbits(x) __builtin_popcountll(x)
#define zerobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define endl "\n"

int a[100];

void solve()
{
    int n, k;
    cin >> n >> k;
    int str = 0;
    f(i, n) cin >> a[i];
    f(i, n)
    {
        str += a[i];
        str -= k;
        if (str < 0)
        {
            cout << "NO " << i + 1 << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
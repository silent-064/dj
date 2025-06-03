/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ll long long
#define ull unsigned long long
using namespace std;
void
solve()
{
    ll x;
    cin >> x;
    vector<ll> y   = {x, x, x};
    int        cnt = 0;
    while (y.back() != 0)
    {
        cnt++;
        y.back() = y[1] / 2;
        sort(y.begin(), y.end());
    }
    cout << cnt << endl;
}
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {

        solve();
    }
}
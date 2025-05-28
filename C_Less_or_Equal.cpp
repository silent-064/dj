/*
 * Author : Protic Prappo Durjoy
 * Date :29/5/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, i;
    cin >> a >> b;
    vector<int> x(a + 1);
    for (i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    x[a] = -1;
    sort(x.begin(), x.end());
    x.push_back(1e9 + 1);
    long long ans = 0;
    if (x[b] == x[b + 1])
        ans = -1;
    else if (x[b] + 1 != x[b + 1])
        ans = x[b + 1] - 1;
    else
        ans = x[b];

    if (ans <= 0)
        cout << -1 << endl;
    else
        cout << ans << endl;
}
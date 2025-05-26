/*
 * Author : Protic Prappo Durjoy
 * Date :26/5/25
 * idea from tutorial 
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
void
solve()
{
    int b, i;
    cin >> b;
    vector<int> x(b);
    for (i = 0; i < b; i++)
    {
        cin >> x[i];
    }
    if (accumulate(x.begin(), x.end(), 0) == b)
    {
        yes;
        return;
    }
    for (i = 0; i < b - 1; i++)
    {
        if (!x[i] && !x[i + 1])
        {
            yes;
            return;
        }
    }
    no;
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
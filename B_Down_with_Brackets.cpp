/*
 * Author : Protic Prappo Durjoy
 * Date :2/6/25
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
    string s1;
    cin >> s1;

    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i + 1 < s1.size(); i++)
    {
        if (s1[i] == '(')
            cnt1++;
        else
            cnt1--;
        if (cnt1 < 0)
        {
            yes;
            return;
        }
    }
    if (cnt1 == 0)
    {
        no;
    }
    else
    {
        yes;
    }
}
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i, cnt1 = 0, cnt2 = 0;
    cin >> a;
    while (a--)
    {
        solve();
    }
}
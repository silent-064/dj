/*
 * Author : Protic Prappo Durjoy
 * Date :26/5/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
bool
f(int l, int t, const string& s)
{
    int z = 0, o = 0;
    for (int i = 0; i < l; ++i)
    {
        if (s[i] == '0')
            z++;
        else
            o++;
    }

    int h = l / 2;
    int r = h - t;

    if (r < 0 || r > h)
        return false;
    if (z < r || o < r)
        return false;
    if ((z - r) % 2 != 0 || (o - r) % 2 != 0)
        return false;

    return true;
}

int
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a;
    cin >> a;
    while (a--)
    {
        int    n, k;
        string s;
        cin >> n >> k >> s;

        if (f(n, k, s))
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}

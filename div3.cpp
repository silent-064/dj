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
        int b;
        cin >> b;
        double x = sqrt(b);
        int    y = x;
        if (x == y)
        {
            cout << 0 << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
/*
 * Author : Protic Prappo Durjoy
 * Date :31/5/25
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
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, d, x, i;
    cin >> a;
    while (a--)
    {
        cin >> x >> b >> c >> d;
        if (x < d && b <= c)
        {
            if (x >= b)
            {
                cout << "Gellyfish\n";
            }
            else
                cout << "Flower\n";
        }
        else if (x >= d && b <= c)
            cout << "Gellyfish\n";
        else if (x < d && b >= (c + 1))
            cout << "Flower\n";
        else
        {
            if (d <= c)
                cout << "Gellyfish\n";
            else
                cout << "Flower\n";
        }
    }
}
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
    int a, i;
    cin >> a;
    int         b;
    vector<int> x;
    for (i = 0; i < a; i++)
    {
        cin >> b;
        if (b % 2 == 0)
        {
            b = b - 1;
        }
        x.push_back(b);
    }

    for (auto it : x)
    {
        cout << it << " ";
    }
}
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
    int    a, i;
    string s1, s2;
    cin >> s1 >> s2;
    int x = s1.length() - 1;
    int y = s2.length() - 1;
    while (x >= 0 && y >= 0 && s1[x] == s2[y])
    {
        x--;
        y--;
    }
    cout << (x + 1) + (y + 1);
}

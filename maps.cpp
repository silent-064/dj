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
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    map<int, int> m;
    for (i = 0; i < a; i++)
    {
        int s1;
        cin >> s1;
        m[s1]++;
    }
    for (auto it : m)
    {
        cout << it.first << endl;
    }
}
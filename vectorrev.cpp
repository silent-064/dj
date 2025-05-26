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
#define ull unsigned long long
using namespace std;
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    int x;
    cin >> x;
    vector<int> v(x);
    for (i = 0; i < x; i++)
    {
        cin >> v[i];
    }
    reverse(v.begin(), v.end());
    for (i = 0; i < x; i++)
    {
        cout << v[i] << " ";
    }
}
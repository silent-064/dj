/*
 * Author : Protic Prappo Durjoy
 * Date :27/5/25
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
    vector<int> v(a);
    for (i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    int         freq[1001] = {};
    vector<int> store;
    for (i = a - 1; i >= 0; i--)
    {
        if (freq[v[i]] == 0)
        {
            store.push_back(v[i]);
        }
        freq[v[i]]++;
    }
    reverse(store.begin(), store.end());
    cout << store.size() << endl;
    for (auto out : store)
    {
        cout << out << " ";
    }
    return 0;
}
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
    vector<int> x(a);
    vector<int> store;
    int         count = 1;
    for (i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    for (i = 1; i < a; i++)
    {
        if (x[i] == 1)
        {
            store.push_back(count);
            count = 1;
        }
        else
        {
            count++;
        }
    }
    if (count != 0)
    {
        store.push_back(count);
    }
    cout << store.size() << endl;
    for (auto it : store)
    {
        cout << it << " ";
    }
}
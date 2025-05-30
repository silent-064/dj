/*
 * Author : Protic Prappo Durjoy
 * Date :29/5/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull long long
#define ull unsigned long long
using namespace std;
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, i;
    cin >> a >> b;
    vector<int> x(a);
    vector<int> store;
    bool        used[101] = {false};

    for (i = 0; i < a; i++)
    {
        cin >> x[i];
        if (!used[x[i]])
        {
            used[x[i]] = true;
            store.push_back(i + 1);
        }
    }

    if ((int) store.size() >= b)
    {
        yes;
        for (i = 0; i < b; i++)
        {
            cout << store[i] << " ";
        }
    }
    else
    {
        no;
    }
}
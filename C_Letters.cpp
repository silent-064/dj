/*
 * Author : Protic Prappo Durjoy
 * Date :28/5/25
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
    int a, b, i;
    cin >> a >> b;
    vector<ull> x(a);
    vector<ull> y(b);
    vector<ull> store;
    for (i = 0; i < a; i++)
    {
        cin >> x[i];
        if (i == 0)
        {
            store.push_back(x[i]);
        }
        else
        {
            store.push_back(x[i] + store[i - 1]);
        }
    }

    for (i = 0; i < b; i++)
    {
        cin >> y[i];  //12dise suppose..ar eipase 15+10=25 hoise
    }
    for (i = 0; i < b; i++)
    {
        auto it  = lower_bound(store.begin(), store.end(), y[i]);  //find krlo 25
        ull  idx = it - store.begin();
        ull  room;
        if (idx == 0)
        {
            room = y[i];
        }
        else
        {
            room = y[i] - store[idx - 1];
        }
        cout << idx + 1 << " " << room << endl;
    }
    return 0;
}
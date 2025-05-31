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
    int a, c, i;
    cin >> a >> c;

    vector<int>            x;
    vector<pair<int, int>> res;

    for (i = 0; i < a; i++)
    {
        int b;
        cin >> b;
        x.push_back(b);
        res.push_back({b, i});
    }

    sort(res.begin(), res.end(), greater<>());
    res.resize(c);

    sort(res.begin(), res.end(),
         [](pair<int, int> p1, pair<int, int> p2) { return p1.second < p2.second; });

    int sum = 0, lst = 0;
    for (i = 0; i < c - 1; i++)
    {
        sum += *max_element(x.begin() + lst, x.begin() + res[i].second + 1);
        lst = res[i].second + 1;
    }
    sum += *max_element(x.begin() + lst, x.end());

    cout << sum << endl;

    lst = 0;
    for (i = 0; i < c - 1; i++)
    {
        cout << res[i].second - lst + 1 << " ";
        lst = res[i].second + 1;
    }
    cout << a - lst << endl;

    return 0;
}
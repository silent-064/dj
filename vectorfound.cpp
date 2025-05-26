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
    vector<int> v = {1, 2, 3, 4, 5, 6, 7};
    int         target, a, i;
    cin >> target;

    auto it = find(v.begin(), v.end(), target);
    if (it != v.end())
    {
        cout << "Found" << " " << (it - v.begin()) << endl;
    }
    else
    {
        cout << "Not Found";
    }
}
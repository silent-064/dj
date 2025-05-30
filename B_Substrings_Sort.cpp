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
    vector<string> s1(a);
    string         s2 = "";
    vector<string> store;
    for (i = 0; i < a; i++)
    {
        cin >> s1[i];
    }

    sort(s1.begin(), s1.end(),
         [&](const string& s1, const string& b) { return s1.size() < b.size(); });
    for (i = 0; i < a - 1; i++)
    {

        if (s1[i + 1].find(s1[i]) == string::npos)
        {
            no;
            return 0;
        }
    }
    yes;
    for (auto it : s1)
    {
        cout << it << endl;
    }
}
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

    int                 a, b, i;
    map<string, string> m;
    map<string, string> m1;

    cin >> a >> b;

    for (i = 0; i < a; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        m[s2] = s1;
    }

    for (i = 0; i < b; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;

        m1[s1] = s2;

        string temp = s2;
        if (!temp.empty() && temp.back() == ';')
            temp.pop_back();

        if (m.find(temp) != m.end())
        {
            m[temp] = m[temp];
        }
    }

    for (auto it : m1)
    {
        string s1 = it.first;
        string s2 = it.second;

        cout << s1 << " " << s2;

        string temp = s2;
        if (!temp.empty() && temp.back() == ';')
            temp.pop_back();

        if (m.find(temp) != m.end())
        {
            cout << " #" << m[temp];
        }

        cout << endl;
    }
}

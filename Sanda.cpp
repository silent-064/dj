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
    int    a, i;
    string s1;
    cin >> s1;

    int freq[26] = {0};
    for (char c : s1)
    {
        freq[c - 'a']++;
    }

    if (freq['s' - 'a'] >= 1 && freq['a' - 'a'] >= 2 && freq['n' - 'a'] >= 1 &&
        freq['d' - 'a'] >= 1)
        yes;
    else
        no;

    return 0;
}

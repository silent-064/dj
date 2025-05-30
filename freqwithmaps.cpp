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
#define ull long long
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
    while (a--)
    {
        string s1;
        cin >> s1;
        map<char, int> freq;
        for (char c : s1)
        {
            freq[c]++;
        }
        for (auto it : freq)
        {
            cout << it.first << "=" << it.second << endl;
        }
    }
}
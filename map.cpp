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
    int a, i;
    cin >> a;
    while (a--)
    {

        map<string, int> marks;
        int              x[1000];
        string           s1;
        for (i = 0; i < a; i++)
        {
            cin >> s1 >> x[i];
            marks[s1] = x[i];
        }
        for (auto it : marks)
        {
            cout << it.first << "=" << it.second << endl;
        }
    }
}
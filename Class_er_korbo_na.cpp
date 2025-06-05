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
    string s1;
    cin >> s1;

    int cnt = 0;

    int ind = s1.find("PP");
    for (int j = 0; j < ind; j++)
    {
        if (s1[j] == 'A')
            cnt++;
    }

    cout << cnt << endl;

    return 0;
}
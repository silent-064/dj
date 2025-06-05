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

    for (int i = 0; i < a; i++)
    {
        if (s1[i] == 'A')
        {

            if (i >= 2 && s1[i - 1] == 'P' && s1[i - 2] == 'P')
            {

                continue;
            }
            else
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}

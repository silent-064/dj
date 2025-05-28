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
    int a, i;
    cin >> a;
    string s;
    cin >> s;
    int freq[26][26] = {0};

    for (i = 0; i < a - 1; i++)
    {
        char fst = s[i];
        char sec = s[i + 1];
        freq[fst - 'A'][sec - 'A']++;
    }

    int    maxu = 0;
    string res  = "";
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (freq[i][j] > maxu)
            {
                maxu = freq[i][j];
                res  = "";
                res += ('A' + i);
                res += ('A' + j);
            }
        }
    }
    cout << res << endl;

    return 0;
}

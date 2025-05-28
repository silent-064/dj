/*
 * Author : Protic Prappo Durjoy
 * Date :27/5/25
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
    char ch[a];
    int  count = 0, uncount = 0, discount = 0;
    for (i = 0; i < a; i++)
    {
        cin >> ch[i];

        if (ch[i] == 'x')
        {
            count++;
            if (count > 2)
            {
                uncount++;
            }
        }
        else
        {
            count = 0;
        }
    }

    cout << uncount;

    return 0;
}
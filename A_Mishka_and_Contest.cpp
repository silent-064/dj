/*
 * Author : Protic Prappo Durjoy
 * Date :30/5/25
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
    int a, b, i;
    cin >> a >> b;
    vector<int> x(a);
    int         count = 0;
    for (i = 0; i < a; i++)
    {
        cin >> x[i];
    }
    for (i = 0; i < a; i++)
    {
        if (b >= x[i])
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if (count == a)
    {
        cout << count << endl;
        return 0;
    }
    else
    {
        for (i = a - 1; i >= 0; i--)
        {
            if (b >= x[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
}
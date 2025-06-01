/*
 * Author : Protic Prappo Durjoy
 * Date :1/6/25
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

    int a;
    cin >> a;
    while (a--)
    {
        int         b, c, i, count = 0, sum = -1, chk = 0, newcnt = 0;
        vector<int> store1;
        vector<int> store2;
        cin >> b >> c;
        vector<int> x(b), y(b);

        for (i = 0; i < b; i++)
        {
            cin >> x[i];
        }

        for (i = 0; i < b; i++)
        {
            cin >> y[i];
            if (y[i] == -1)
            {
                count++;
                store1.push_back(x[i]);
            }
            else
            {
                if (sum == -1)
                    sum = x[i] + y[i];
                else if (sum != x[i] + y[i])
                    chk = 1;
            }
        }

        if (chk)
        {
            cout << 0 << endl;
            continue;
        }

        if (sum == -1)
        {
            int maxu = *max_element(x.begin(), x.end());
            int minu = *min_element(x.begin(), x.end());
            int ans  = c - (maxu - minu) + 1;
            cout << max(ans, 0) << endl;
        }
        else
        {
            for (i = 0; i < count; i++)
            {
                int val = sum - store1[i];
                if (val >= 0 && val <= c)
                {
                    newcnt++;
                }
            }

            if (newcnt == count)
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}

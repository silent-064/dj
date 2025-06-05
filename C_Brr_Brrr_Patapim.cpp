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
    int a, i, j;
    cin >> a;
    int matrix[101][101];
    while (a--)
    {
        int b;
        cin >> b;

        vector<int> store;

        for (i = 1; i <= b; i++)
        {
            for (j = 1; j <= b; j++)
            {
                cin >> matrix[i][j];
                if (i == 1)
                {
                    store.push_back(matrix[i][j]);
                }
                if (j == b && i > 1)
                {
                    store.push_back(matrix[i][j]);
                }
            }
        }
        int x = -1;
        for (i = 1; i <= b * b; i++)
        {
            if (find(store.begin(), store.end(), i) == store.end())
            {
                x = i;
                break;
            }
        }
        if (x != -1)
        {
            store.push_back(x);
        }
        for (auto it : store)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    return 0;
}
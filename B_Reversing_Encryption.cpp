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
    int a, i;
    cin >> a;
    vector<int> divisors;
    string      s1;
    cin >> s1;
    for (i = 1; i <= sqrt(a); i++)
    {
        if (a % i == 0)
        {
            divisors.push_back(i);
            if (i != a / i)
            {
                divisors.push_back(a / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    // for (auto it : divisors)
    // {
    //     cout << it << endl;
    // }

    for (i = 0; i < divisors.size(); i++)
    {
        reverse(s1.begin(), s1.begin() + divisors[i]);
    }
    cout << s1 << endl;
}
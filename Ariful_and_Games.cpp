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
    int       a, i;
    long long b, c, d, e;
    cin >> b >> c >> d >> e;

    ll sum = b + c + d + e;

    if (sum % 2 == 0)
        yes;
    else if (b < 3 || c < 3 || d < 3 || e < 3)
        yes;
    else
        no;

    return 0;
}
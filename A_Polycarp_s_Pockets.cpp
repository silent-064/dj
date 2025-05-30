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
    int         x;
    vector<int> freq(1001);
    for (i = 0; i < a; i++)
    {
        cin >> x;
        freq[x]++;
    }
    cout << *max_element(freq.begin(), freq.end()) << endl;
}
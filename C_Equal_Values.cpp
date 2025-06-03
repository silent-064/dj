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
void solve() {
    long long x;
    cin >> x;
    int cnt = 0;
    long long y = 1;
    while (y < x) {
        y *= 2;
        cnt++;
    }
    cout << 2 * cnt + 1 <<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {



solve();

    }
}
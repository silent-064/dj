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
bool
isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int
solve(int l, int r)
{
    int count = 0;
    for (int i = l; i <= r; i++)
    {
        int root = (int) sqrt(i);
        if (root * root == i)
        {
            if (isPrime(root))
            {
                count++;
            }
        }
    }
    return count;
}
int
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, i;
    cin >> a >> b;
    cout << solve(a, b) << endl;
    return 0;
}
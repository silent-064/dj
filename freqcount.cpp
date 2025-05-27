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
    vector<int> v(10);
    for (i = 0; i < a; i++)
    {
        cin >> v[i];
    }
    int freq[a] = {0};
    for (i = 0; i < a; i++)
    {
        freq[v[i]]++;
    }

    for (i = 0; i < a; i++)
    {
        
        cout << i << " " << freq[i] << endl;
    }
}
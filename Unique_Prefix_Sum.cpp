#include <iostream>
#include <unordered_set>
using namespace std;

int
main()
{
    int N;
    cin >> N;
    long long                prefix_sum = 0;
    unordered_set<long long> seen;
    int                      max_length = 0;

    for (int i = 0; i < N; i++)
    {
        long long a;
        cin >> a;
        prefix_sum += a;

        if (seen.find(prefix_sum) != seen.end())
        {

            break;
        }
        seen.insert(prefix_sum);
        max_length = i + 1;
    }

    cout << max_length << "\n";
    return 0;
}

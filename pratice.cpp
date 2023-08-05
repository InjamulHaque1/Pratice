#include <bits/stdc++.h>
#define lld long long int
#define ui unsigned int
using namespace std;
int main()
{

    ios_base ::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    lld testcase;
    cin >> testcase;
    while (testcase--)
    {
        lld test;
        cin >> test;
        lld arr[test];
        for (lld i = 0; i < test; i++)
        {
            cin >> arr[i];
        }
        lld n = sizeof(arr) / sizeof(arr[0]);
        sort(arr, arr + n);
        lld ans = 0;
        lld k = n / 2;
        for (lld i = 0; i < k; i++)
        {
            ans = arr[n - 1] - arr[i] + ans;
            n--;
        }
        cout << ans << endl;
    }
    return 0;
}

//MIA KHALIFA
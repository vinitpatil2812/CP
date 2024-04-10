#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> cnt(n + 1, 0), mx(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= n)
                ++cnt[x];
        }
        for (int i = 1; i <= n; ++i)
        {
            for (int j = i; j <= n; j += i)
                mx[j] += cnt[i];
        }
        int result = *max_element(mx.begin(), mx.end());

        cout << result << endl;
    }

    return 0;
}
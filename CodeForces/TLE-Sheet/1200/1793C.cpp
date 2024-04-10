#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v)           \
    {                   \
        for (auto &x : v) \
            cout << x << " "; \
        cout << endl;   \
    } // printVector
#define iv(v)          \
    {                  \
        for (auto &x : v) \
            cin >> x;   \
    } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n);
    iv(v);

    multiset<int> mst;

    for (auto i : v)
    {
        mst.insert(i);
    }

    int i = 0, j = n - 1;

    int cnt = 0;

    while (i <= j && cnt < 4)
    {
        if (cnt >= 4)
        {
            break;
        }

        while (i <= j)
        {
            if (*(mst.begin()) != v[i] && *(--mst.end()) != v[i])
            {
                cnt++;
                break;
            }
            cnt = 0;
            mst.erase(v[i]);
            i++;
        }

        while (i <= j)
        {
            if (*(mst.begin()) != v[j] && *(--mst.end()) != v[j])
            {
                cnt++;
                break;
            }

            cnt = 0;
            mst.erase(v[j]);
            j--;
        }
    }

    // cout << cnt << endl;
    if (i > j)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << i + 1 << " " << j + 1 << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

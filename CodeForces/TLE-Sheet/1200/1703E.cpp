#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define pll pair<ll, ll>

const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int ans = 0;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n; j++) {
    //         int cnt = 0;
    //         // cnt += v[i][j];
    //         // cnt += v[j][i];
    //         // cnt += v[i][n - 1 - j];
    //         // cnt += v[n - 1 - i][j];
    //         // cnt += v[n - 1 - i][n - 1 - j];
    //         ans += min(cnt, 4 - cnt);
    //     }
    // }

    cout << ans / 4 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

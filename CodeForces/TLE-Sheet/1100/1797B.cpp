#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    // Your solution code here
    int n, k;
    cin >> n >> k;

    vector<vector<int>> v(n, vector<int> (n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int cnt = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(v[i][j] != v[n - 1 - i][n - 1 - j]) {
                cnt++;
                // cout << i << " " << j << endl;
            }
        }
    }

    // cout << cnt << endl;.
    cnt /= 2;

    if(k < cnt) {
        cout << "NO" << endl;
    }
    else {
        k -= cnt;

        if(n % 2) {
            cout << "YES" << endl;
        }
        else {
            if(k % 2) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
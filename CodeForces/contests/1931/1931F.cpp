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

    if(n == 1 || k <= 2) {
        while(k--) {
            vector<int> temp(n);
            iv(temp);
        }

        cout << "YES" << endl;

        return;
    }

    vector<vector<pair<int, int>>> result(n + 1, vector<pair<int, int>> (1, {-1, -1}));

    bool ans = 1;

    while(k--) {
        vector<int> v(n + 1);
        // iv(v);

        for(int i = 1; i <= n; i++) {
            cin >> v[i];
        }

        for(int i = 1; i < n; i++) {
            if(result[v[i]][0] != {-1, -1}) {
                if(result[v[i]][0] )
            }
            
            result[v[i]][0] = {v[i + 1], i + 1};
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
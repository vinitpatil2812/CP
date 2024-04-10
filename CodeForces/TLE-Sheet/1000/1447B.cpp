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
    int n, m;
    cin >> n >> m;

    int mn = INT_MAX, result = 0;
    vector<int> v(n, 0);

    for(int i = 0; i < n; i++) {
        int count = 0;

        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;

            result += abs(x);

            if(x <= 0) {
                count++;
            }

            mn = min(abs(x), mn);
        }

        v[i] = count % 2;
    }

    int verti = accumulate(all(v), 0);

    if(verti % 2) {
        cout << result - 2 * mn << endl;
    }
    else {
        cout << result << endl;
    }
    // cout << endl;
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
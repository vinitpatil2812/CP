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

    vector<ll> a(n), b(n);

    iv(a);
    iv(b);

    ll result = LLONG_MAX;
    ll sum = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(i < m) {
            result = min(result, sum + a[i]);
        }

        sum += min(a[i], b[i]);

    }

    cout << result << endl;
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
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
    int n, r, b;
    cin >> n >> r >> b;

    int mn = r / (b + 1);
    int extra = r % (b + 1);

    for(int i = 0; i < extra; i++) {
        cout << string(mn + 1, 'R') << 'B';
    }

    for(int i = extra; i < b; i++) {
        cout << string(mn, 'R') << 'B';
    }

    cout << string(mn, 'R');
    cout << endl;
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
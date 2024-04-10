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
    ll n, x, y;
    cin >> n >> x >> y;

    vector<ll> v(n);
    iv(v);

    map<ll, ll> mp;

    ll result = 0;

    vector<ll> a = v, b = v;

    for(auto &num : a) {
        num %= x;
    }

    for(auto &num : b) {
        num %= y;
    }

    for(int i = 0; i < n; i++) {
        
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
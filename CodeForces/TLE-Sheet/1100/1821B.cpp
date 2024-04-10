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
    int n;
    cin >> n;

    vector<int> a(n), b(n);

    iv(a);
    iv(b);

    int l = 0, r = n - 1;

    while(l < n && a[l] == b[l]) {
        l++;
    }

    while(r < n && a[r] == b[r]) {
        r--;
    }

    if(l == n || r == -1) {
        cout << 1 << " " << n << endl;
        return;
    }

    int mn = INT_MAX, mx = INT_MIN;

    for(int i = l; i <= r; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }

    // cout << mn << " " << mx << endl;

    while(l > 0 && a[l - 1] <= mn) {
        l--;
        mn = min(mn, a[l]);
    }

    while(r < n - 1 && a[r + 1] >= mx) {
        r++;
        mx = max(mx, a[r]);
    }

    cout << l + 1 << " " << r + 1 << endl;
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
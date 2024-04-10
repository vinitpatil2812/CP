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

    vector<int> v(n);
    iv(v);

    vector<int> pre(n, 0);

    for(int i = 1; i < n; i++) {
        if(v[i - 1] != v[i]) {
            pre[i]++;
        }

        pre[i] += pre[i - 1];
    }

    // pv(pre);

    int q;
    cin >> q;

    while(q--) {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        if(pre[r] - pre[l] <= 0) {
            cout << -1 << " " << -1 << endl;
            continue;
        }

        int idx = upper_bound(pre.begin() + l, pre.begin() + r, pre[l]) - pre.begin();

        cout << idx << " " << idx + 1 << endl;
    }
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
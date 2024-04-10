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
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    iv(v);

    while(q--) {
        int x;
        cin >> x;

        int pos = find(v.begin(), v.end(), x) - v.begin();
        cout << pos + 1 << " ";

        rotate(v.begin(), v.begin() + pos, v.begin() + pos + 1); 
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    // cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
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

    vector<int> v(n), b(q);
    iv(v);
    iv(b);

    unordered_set<int> st;

    for(int i = 0; i < q; i++) {
        if(st.count(b[i])) {
            continue;
        }

        st.insert(b[i]);
        st.erase(b[i] - 1);

        for(int j = 0; j < n; j++) {
            if(v[j] % (1 << b[i]) == 0) {
                v[j] += (1 << (b[i] - 1));
            }
        }
    }

    pv(v);
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
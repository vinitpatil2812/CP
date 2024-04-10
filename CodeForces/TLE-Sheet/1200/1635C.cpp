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

    vector<ll> v(n);
    iv(v);

    multiset<pll> mst;

    for(int i = 0; i < n; i++) {
        mst.insert({v[i], i});
    }

    vector<vector<ll>> ans;

    for(int i = 0; i + 2 < n; i++) {
        mst.erase({v[i], i});
    
        ll mn = (*(mst.begin())).first;
        ll mx = (*(--mst.end())).first;
        // ll mn = 0, mx  = 1;

        if(v[i] < mn - mx) {
            v[i] = mn - mx;
            ans.push_back({i + 1, (*(mst.begin())).second, (*(--mst.end())).second});
            sort(ans.back().begin() + 1, ans.back().end());
        }
    }

    // for(int i = 1; i < n; i++) {
    //     if(v[i - 1] > v[i]) {
    //         cout << -1 << endl;
    //         return;
    //     }
    // }

    cout << ans.size() << endl;

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
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
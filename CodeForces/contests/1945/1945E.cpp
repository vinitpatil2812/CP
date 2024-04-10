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
    int n, x;
    cin >> n >> x;

    vector<int> v(n);
    iv(v);

    int found = -1, cf = -1;

    for(int i = 0; i < n; i++) {
        if(v[i] == x) {
            found = i;
            break;
        }

        if(v[i] == n - x) {
            cf = i;
        }
    }

    map<int, int> mp;

    for(int i = 0; i < n; i++) {
        mp[v[i]] = i;
    }


    vector<pair<int, int>> ans;

    // ans.push_back({found, cf});
    ans.push_back({mp[x], mp[mp[x]]});

    int l = n / 2;
    int r = n;

    while(r - l > 1) {
        int m = (r + l) / 2;
    

        ans.push_back({mp[m + 1], mp[mp[m + 1]]});
        r = m;
    }

    cout << ans.size() << endl;

    for(auto i : ans) {
        cout << i.first + 1 << " " << i.second + 1 << endl;
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
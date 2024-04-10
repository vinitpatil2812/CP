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
    ll n, k;
    cin >> n >> k;

    vector<pll> p;

    ll i = 1, j = n;

    while(i <= j) {
        // cout << i << " " << j << endl;
        p.push_back({j--, i++});
        
    }

    // cout << p.size();

    for(int l = 1; l < p.size() - 1; l += 4) {
        swap(p[l], p[l + 1]);
    }


    for(auto l : p) {
        cout << l.first << " ";

        if(l.first != l.second) {
            cout << l.second << " ";
        }
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
#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    ll n, f, a, b;
    cin >> n >> f >> a >> b;

    int prev = 0;

    vector<ll> v(n);
    iv(v);

    for(int i = 0; i < n; i++) {
        f -= min((v[i] - prev) * a, b);
        prev = v[i];

        if(f <= 0) {
            cout << "NO" << endl;
            return;
        }
    }

    // if(f > 0) {
        cout << "YES" << endl;
    // }
    // else {
        // cout << "NO" << endl;
    // }
}
  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    ll total = 0;
    bool result = 0;

    unordered_map<ll, ll> mp;
    vector<ll> v(n);

    iv(v);

    mp[0] = 1;
    
    int i = 0;

    while(i < n) {
        if(i % 2) {
            total -= v[i];
        }
        else {
            total += v[i];
        }

        if(mp[total]) {
            result = 1;
        }
        else {
            mp[total]++;
        }

        i++;
    }

    if(!result) {
        cout << "NO" << endl;
        return;
    }
    
    cout << "YES" << endl;
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
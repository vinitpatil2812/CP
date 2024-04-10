#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;
  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);
        iv(v);

        ll sum = accumulate(v.begin(), v.end(), 0LL);
        ll mx = 0;

        for(int i = 0; i < n; i++) {
            mx += (v[i] + x - 1) / x;
        }

        cout << (sum + x - 1) / x << " " << mx << endl;
    }
    
    
    return 0;
}
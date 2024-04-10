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
        ll n, k, x;
        cin >> n >> k >> x;

        ll mn = (k * (2 + (k - 1) * 1)) / 2;
        ll mx = (k * (2 * (n - k + 1) + (k - 1) * 1)) / 2;

        // cout << mn << " " << mx << endl;

        if(x >= mn && x <= mx) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
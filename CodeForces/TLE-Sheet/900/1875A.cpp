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
        ll a, b, n;
        cin >> a >> b >> n;

        ll result = 0;

        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;

            result += min(a - 1, x);
        }

        cout << result + b << endl;
    }
    
    return 0;
}
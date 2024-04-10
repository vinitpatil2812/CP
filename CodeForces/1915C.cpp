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
        int n;
        cin >> n;

        vector<ll> v(n);

        iv(v);

        ll total = accumulate(v.begin(), v.end(), 0LL);

        ll side = sqrt(total);

        if(side * side == total) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }
    
    return 0;
}
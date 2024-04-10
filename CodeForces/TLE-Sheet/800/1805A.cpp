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

        int o = 0, xr = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            xr ^= x;
        }

        if(n % 2) {
            cout << xr << endl;
        }
        else {
            if(xr == 0) {
                cout << 0 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
    }
    
    return 0;
}
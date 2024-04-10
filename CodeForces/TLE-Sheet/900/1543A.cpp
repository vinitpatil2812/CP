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
        ll a, b;
        cin >> a >> b;

        if(b > a) {
            swap(a, b);
        }

        if(a == b) {
            cout << 0 << " " << 0 << endl;
        }
        else {
            ll am = a % (a - b);
            ll bm = b % (a - b);

            am = min(am, (a - b) - am);
            bm = min(bm, (a - b) - bm);

            cout << a - b << " " << min(am, bm) << endl;
        }
    }
    
    return 0;
}
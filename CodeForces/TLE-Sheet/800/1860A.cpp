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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if(b <= d && c <= a + d - b) {
			cout << (d - b) + (a + d - b - c) << endl;
		}
        else {
			cout << -1 << endl;
		}        
    }
    
    return 0;
}
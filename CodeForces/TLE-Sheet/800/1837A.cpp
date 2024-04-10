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
        int n, k;
        cin >> n >> k;

        if(k > n || n % k != 0) {
            cout << 1 << endl;
            cout << n << endl;

            continue;
        }

        if(k % 2 == 0) {
            cout << 2 << endl;
            cout << -1 << " " << n + 1 << endl;
        }
        else {
            cout << 2 << endl;
            cout << -4 << " " << n + 4 << endl;
            // cout << 1 << " " << -4 << " " << n + 3 << endl;
        }      
    }
    
    return 0;
}
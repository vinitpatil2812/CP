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
        ll n, k;
        cin >> n >> k;

        if(n & 1) {
            if(k & 1) {
                if(n - k < 0) {
                    cout << "NO" << endl;
                }
                else {
                    cout << "YES" << endl;
                }
            }
            else {
                cout << "NO" << endl;
            }

            continue;
        }
        
        cout << "YES" << endl;
    }
    
    return 0;
}
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
        ll x, n;
        cin >> x >> n;

        ll r = n % 4;

        if(r == 0) {
            cout << x << endl;
        }
        else {
            ll s = n - r +  1;

            while(r--) {
                if(x % 2) {
                    x += s;
                }
                else {
                    x -= s;
                }
                
                s++;
            }

            cout << x << endl;
        }
    }
    
    return 0;
}
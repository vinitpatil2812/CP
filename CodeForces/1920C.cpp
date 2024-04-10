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

        vector<int> v(n);

        iv(v);

        ll result = 0;

        for(int i = 1; i <= n; i++) {
            if(n % i != 0) {
                continue;
            }

            ll k = n / i;
            ll g = 0;

            for(int j = 0; j < k; j++) {
                ll diff = 0;
                for(int l = j; l < n; l += k) {
                    diff = __gcd(diff, (ll)abs(v[l] - v[j]));
                }

                g = __gcd(g, diff);
            }

            result += (g != 1);
        }

        cout << result << endl;
    }
    
    return 0;
}
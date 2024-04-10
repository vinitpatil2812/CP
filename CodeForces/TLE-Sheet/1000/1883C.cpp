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

        vector<int> v(n);
        iv(v);

        int two = 0;

        ll result = INT_MAX;

        for(int i = 0; i < n; i++) {            
            ll r = v[i] % k;

            if(r == 0) {
                r = k;
            }

            if(v[i] % 2 == 0) {
                two++;
            }

            result = min(result, k - r);
        }

        if(k == 4) {
            if(two >= 2 || result == 0) {
                cout << 0 << endl;
            }
            else {
                cout << min(2 - two, (int)result) << endl;
            }
        }
        else {
            cout << result << endl;
        }
    }
    
    return 0;
}
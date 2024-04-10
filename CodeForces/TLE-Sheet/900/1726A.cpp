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

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }

        ll mx = *max_element(v.begin() + 1, v.end());
        ll mn = *min_element(v.begin(), v.end() - 1);

        ll result = 0;

        for(int i = 1; i < n; i++) {
            result = max(result, v[i - 1] - v[i]);
        }

        result = max({result, mx - v[0], v[n - 1] - mn});

        cout << result << endl;
    }
    
    return 0;
}
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

        ll result = INT_MAX;

        vector<int> v(n);

        iv(v);

        for(int i = 1; i < n; i++) {
            result = min(result, (ll)v[i] - v[i - 1]);
        }

        if(result < 0) {
            cout << 0 << endl;
            continue;
        }

        // cout << "ans";

        if(result & 1) {
            cout << (result + 1) / 2 << endl;
        }
        else {
            cout << result / 2 + 1 << endl;
        }
    }
    
    return 0;
}
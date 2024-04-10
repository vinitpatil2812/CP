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
        int n, x;
        cin >> n >> x;

        int result = INT_MIN;

        vector<int> v(n);
        iv(v);

        for(int i = 0; i < n - 1; i++) {
            result = max(result, abs(v[i] - v[i + 1]));
        }

        result = max(result, 2 * abs(x - v[n - 1]));
        result = max(result, abs(v[0] - 0));

        cout << result << endl;
    }
    
    return 0;
}
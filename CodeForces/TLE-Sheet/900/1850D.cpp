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
        sort(all(v));

        int result = 1, count = 1;

        for(int i = 1; i < n; i++) {
            if(abs(v[i] - v[i - 1]) <= k) {
                count++;
            }
            else {
                count = 1;
            }

            result = max(result, count);
        }

        cout << n - result << endl;
    }
    
    return 0;
}
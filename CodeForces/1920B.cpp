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
        int n, k, x;
        cin >> n >> k >> x;

        vector<int> v(n);

        iv(v);

        sort(all(v));

        ll result = LONG_MIN, sum = 0, bob = 0;
        int check = n - k - 1, i = 0, j = 0;

        for(; i < n; i++) {
            if(i > check) {
                result = max(result, sum - (2 * bob));
            }

            sum += v[i];
            bob += v[i];

            while(i - j + 1 > x) {
                bob -= v[j];
                j++;
            }

            // if(i >= check) {
            //     result = max(result, sum - (2 * bob));
            // }
        }

        if(i >= check) {
            result = max(result, sum - (2 * bob));
        }

        cout << result << endl;
    }
    
    return 0;
}
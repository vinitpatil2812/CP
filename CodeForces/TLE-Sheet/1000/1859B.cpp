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

        ll sum = 0;
        int mn = INT_MAX, r = INT_MAX;

        while(n--) {
            int m;
            cin >> m;

            int first = INT_MAX, second = INT_MAX;

            for(int i = 0; i < m; i++) {
                int x;
                cin >> x;

                if(x < first) {
                    second = first;  // Update second to the previous smallest
                    first = x;       // Update first to the new smallest
                }
                else if(x < second) {
                    second = x;      // Update second to the new second smallest
                }
            }

            sum += (second == INT_MAX ? first : second);
            r = min(r, second == INT_MAX ? first : second);
            mn = min(first, mn);
        }

        sum -= r;
        sum += mn;

        cout << sum << endl;
    }
    
    return 0;
}
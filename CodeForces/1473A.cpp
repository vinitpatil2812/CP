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
        int n, d;
        cin >> n >> d;

        int first  = INT_MAX, second = INT_MAX;
        bool all = true;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x < first) {
                second = first;
                first = x;
            }
            else if(x < second) {
                second = x;
            }

            if(x > d) {
                all = false;
            }
        }

        if(all || (first + second <= d)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
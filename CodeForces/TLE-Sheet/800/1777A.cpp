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

        int result = 0;
        int prev = v[0] % 2;

        for(int i = 1; i < n; i++) {
            if(v[i] % 2 == prev) {
                result++;
            }

            prev = v[i] % 2;
        }

        cout << result << endl;
    }
    
    return 0;
}
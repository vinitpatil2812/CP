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

        for(int i = 0; i < n; i++) {
            if(v[i] == 1) {
                v[i]++;
            }
        }

        for(int i = 1; i < n; i++) {
            if(v[i] % v[i - 1] == 0) {
                v[i]++;
            }
        }

        pv(v);
        
    }
    
    return 0;
}
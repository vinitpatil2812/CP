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

        ll result = 0;

        for(int i = n - 2; i >= 0; i--) {
            while(v[i] >= v[i + 1] && v[i] != 0) {
                v[i] /= 2;
                result++;
            }
        }

        for(int i = 0; i < n - 1; i++) {
            if(v[i] >= v[i + 1]) {
                result = -1;
            }
        }

        cout << result << endl;
    }
    
    return 0;
}
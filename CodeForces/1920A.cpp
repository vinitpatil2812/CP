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

        set<int> st;
        
        int f = INT_MIN, s = INT_MAX;

        for(int i = 0; i < n; i++) {
            int a, x;
            cin >> a >> x;

            if(a == 1) {
                f = max(f, x);
            }
            else if(a == 2) {
                s = min(s, x);
            }
            else {
                st.insert(x);
            }
        }

        int result = s - f + 1; 

        for(auto i : st) {
            if(i >= f && i <= s) {
                result--;
            }
        }

        if(result < 0) {
            result = 0;
        }

        cout << result << endl;
    }
    
    return 0;
}

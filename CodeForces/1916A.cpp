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

        ll pro = 1;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            pro *= x;
        }

        if(2023 % pro == 0) {
            cout << "YES" << endl;

            for(int i = 0; i < k - 1; i++) {
                cout << 1 << " ";
            }

            cout << 2023 / pro << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
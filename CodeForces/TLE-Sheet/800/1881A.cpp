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
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int i = 0;

        for(i = 0; i <= 6; i++) {
            if(x.find(s) != string :: npos) {
                break;
            }

            x += x;
        }

        if(i == 7) {
            cout << -1 << endl;
        }
        else {
            cout << i << endl;
        }
    }
    
    return 0;
}
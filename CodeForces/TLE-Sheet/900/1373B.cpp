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
        string s;
        cin >> s;

        ll moves = 0;

        for(auto c : s) {
            if(c == '0') {
                moves++;
            }
        }

        moves = min(moves, s.size() - moves);

        if(moves % 2) {
            cout << "DA" << endl;
        }
        else {
            cout << "NET" << endl;
        }
    }
    
    return 0;
}
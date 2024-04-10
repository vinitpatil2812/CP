#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    vector<vector<char>> v(3, vector<char>(3));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> v[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        bool hasA = false, hasB = false, hasC = false;

        for (int j = 0; j < 3; j++) {
            if (v[i][j] == 'A') {
                hasA = true;
            } else if (v[i][j] == 'B') {
                hasB = true;
            } else if (v[i][j] == 'C') {
                hasC = true;
            }
        }

        if (!hasA) {
            cout << 'A' << endl;
            return;
        } else if (!hasB) {
            cout << 'B' << endl;
            return;
        } else if (!hasC) {
            cout << 'C' << endl;
            return;
        }
    }
}

  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
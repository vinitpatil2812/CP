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
        ll a, b, c;
        cin >> a >> b >> c;

        int r = 1;

        if(c & 1) {
            r = 1;
        }
        else {
            r = 0;
        }

        if(a == b) {
            if(!r) {
                cout << "Second" << endl;
            }
            else {
                cout << "First" << endl;
            }
        }
        else if(a > b) {
            cout << "First" << endl;
        }
        else {
            cout << "Second" << endl;
        }
    }
    
    return 0;
}
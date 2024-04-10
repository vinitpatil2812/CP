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

        if(s[0] == s[s.size() - 1]) {
            cout << s << endl;
        }
        else {
            s[0] = s[s.size() - 1];
            cout << s << endl;
        }
    }
    
    return 0;
}
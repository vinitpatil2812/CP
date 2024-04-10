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
        string s, q;
        cin >> s >> q;

        bool result = true;

        for(int i = s.size() - 1; i >= 0 && result; i--) {
            if(q.back() == s[i]) {
                q.pop_back();
            }
            else if(q.rfind(s[i]) != -1) {
                result = false;
            }
        }

        cout << (result && q.empty() ? "YES" : "NO") << endl;
    }
    return 0;
}
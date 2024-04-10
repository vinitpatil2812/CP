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

        string s;
        cin >> s;

        vector<int> v(26, 0);

        for(int i = 0; i < n; i++) {
            v[s[i] - 'a']++;
        }

        int odd = 0;

        for(int i = 0; i < 26; i++) {
            if(v[i] % 2 == 1) {
                odd++;
            }
        }

        odd -= k;

        if(odd <= 0 || odd == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
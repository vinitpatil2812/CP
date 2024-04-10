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

        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            mp[x]++;
        }

        if(mp.size() == 1) {
            cout << "YES" << endl;
        }
        else if(mp.size() > 2) {
            cout << "NO" << endl;
        }
        else {
            int a = INT_MAX, b = INT_MIN;

            for(auto i : mp) {
                a = min(a, i.second);
                b = max(b, i.second);
            }

            if(abs(a - b) > 1) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
    
    return 0;
}
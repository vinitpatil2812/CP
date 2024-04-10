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
        int mx = INT_MIN, mn = INT_MAX;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            mx = max(mx, x);
            mn = min(mn, x);

            mp[x]++;
        }

        if(mp.size() == 1) {
            cout << "NO" << endl;
        }
        else {
            mp[mx]--;
            mp[mn]--;

            cout << "YES" << endl;

            cout << mx << " " << mn << " ";

            for(auto &i : mp) {
                while(i.second > 0) {
                    cout << i.first << " ";
                    i.second--;
                }
            }

            cout << endl;
        }
    }
    
    return 0;
}
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

        vector<int> v(n);

        iv(v);

        int result = 0;

        map<int, int> mp;
        int prev = 0;

        for(int i = 0; i < n; i++) {
            mp[v[i]]++;
            prev = max(prev, mp[v[i]]);
        }

        while(prev < n) {
            int d = min(n - prev, prev);
            result += 1 + d;
            prev += d;
        }

        cout <<  result << endl;
    }
    
    return 0;
}
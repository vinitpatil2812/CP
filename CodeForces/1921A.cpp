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
        int n = 4;

        vector<pair<int, int>> v(n);

        for(int i = 0; i < n; i++) {
            int a, b;
            cin >> a >> b;

            v[i].first = a;
            v[i].second = b;
        }

        sort(all(v));

        int result = 0;

        result = abs(v[0].second - v[1].second) * abs(v[1].first - v[2].first);

        cout << result << endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    vector<pair<int, int>> v(n);

    iv(a);
    iv(b);

    for(int i = 0; i < n; i++) {
        v[i] = {a[i] + b[i], i};
    }

    sort(v.begin(), v.end());

    long long result = 0, turns = 0;

    for(int i = n - 1; i >= 0; i--) {
        if(turns % 2) {
            result -= b[v[i].second] - 1;
        }
        else {
            result += a[v[i].second] - 1;
        }

        turns++;
    }

    cout << result << endl;
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
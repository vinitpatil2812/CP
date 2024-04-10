#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if(k == 1) {
        cout << "NO" << endl;

        return;
    }

    if(x != 1) {
        cout << "YES" << endl;
        cout << n << endl;

        for(int i = 0; i < n; i++) {
            cout << 1 << " ";
        }
        cout << endl;

        return;
    }

    if(n % 2 && k == 2) {
        cout << "NO" << endl;

        return;
    }

    if(n % 2 == 0) {
        cout << "YES" << endl;
        cout << n / 2 << endl;

        for(int i = 0; i < n / 2; i++) {
            cout << 2 << " ";
        }
        cout << endl;

        return;
    }

    cout << "YES" << endl;
    cout << n / 2 << endl;

    for(int i = 0; i < n / 2 - 1; i++) {
        cout << 2 << " ";
    }

    cout << 3 << endl;
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
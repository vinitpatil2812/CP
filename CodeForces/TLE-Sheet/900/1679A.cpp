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
        ll n;
        cin >> n;

        if(n % 2 || n == 2) {
            cout << -1 << endl;
            continue;
        }

        n /= 2;

        cout << (n % 3 == 0 ? n / 3 : (n / 3) + 1) << " " << (n) / 2 << endl;
    }
    
    return 0;
}
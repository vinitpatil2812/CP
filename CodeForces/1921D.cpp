#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void solve() {
    ll n, m;
    cin >> n >> m;

    vector<ll> a(n), b(m);

    iv(a);
    iv(b);

    sort(all(a));
    sort(b.rbegin(), b.rend());

    // /pv(b);

    ll i = 0, j = n - 1, k = m - 1;

    ll result = 0;

    while(i <= j && i <= k) {
        ll g = abs(a[i] - b[i]);
        ll h = abs(a[j] - b[k]);

        if(g >= h) {
            result += g;
            i++;
        }
        else {
            result += h;
            j--;
            k--;
        }
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
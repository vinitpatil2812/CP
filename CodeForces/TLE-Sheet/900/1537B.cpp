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
        ll n, m, i, j;
        cin >> n >> m >> i >> j;

        vector<ll> x = {1, 1, n, n};
        vector<ll> y = {1, m, 1, m};

        ll f = -1, s = -1;
        ll result = -1;

        for(int p = 0; p < 4; p++) {
            for(int q = 0; q < 4; q++) {
                ll d = (abs(x[p] - x[q]) + abs(y[p] - y[q])) + (abs(x[p] - i) + abs(y[p] - j)) + (abs(x[q] - i) + abs(y[q] - j));

                if(d > result) {
                    result = d;
                    f = p;
                    s = q;
                }
            }
        }

        cout << x[f] << " " << y[f] << " " << x[s] << " " << y[s] << endl;
    }
    
    return 0;
}
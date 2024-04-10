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

        vector<int> v(n);

        for(auto &x : v) {
            cin >> x;
            x %= k;

            if(!x) {
                x = k;
            }
        }

        vector<int> ord(n);
        iota(all(ord), 0);

        stable_sort(all(ord), [&](int i, int j) {
            return v[i] > v[j];
        });

        for(auto x : ord) {
            cout << x + 1 << " ";
        }
        cout << endl;

    }
    
    return 0;
}
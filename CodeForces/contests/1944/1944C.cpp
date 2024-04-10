#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    // Your solution code here
    int n;
    cin >> n;

    vector<int> v(n);

    iv(v);

    sort(all(v));

    int result = -1, idx = 0;
    bool turn = true;

    while(idx < n) {
        if(turn) {
            while(idx < n && v[idx] == result) {
                idx++;
            }

            if(idx == n) {
                cout << result + 1 << endl;
                return;
            }

            result++;

            while(idx < n && v[idx] == result) {
                idx++;
            }
        }
        else {
            idx++;
        }

        turn = !turn;
    }

    cout << result + 1 << endl;

}    

    

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
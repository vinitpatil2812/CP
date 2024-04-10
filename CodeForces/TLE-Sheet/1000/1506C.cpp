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
    string a, b;
    cin >> a >> b;

    if(a.size() > b.size()) {
        swap(a, b);
    }

    int result = 0;

    for(int i = 0; i < a.size(); i++) {
        if(b.find(a.substr(i)) != string :: npos) {
            result = max(result, (int)a.size() - i);
        }

        if(b.find(a.substr(0, a.size() - i)) != string :: npos) {
            result = max(result, (int)a.size() - i);
        }
    }

    cout << a.size() + b.size() - 2 * result << endl;
    // cout << result << endl;
    
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
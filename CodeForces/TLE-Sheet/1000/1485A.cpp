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
    int a, b;
    cin >> a >> b;

    int result = a;
    int count = 0;

    for(int i = 0; i <= sqrt(a); i++) {
        if(b == 1 && i == 0) {
            continue;
        }

        count = i;

        ll c = a;

        while(c) {
            c /= (b + i);
            count++;
        }

        result = min(result, count);
    }

    cout << result << endl;
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
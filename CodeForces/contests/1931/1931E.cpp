#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

ll countDigits(ll num) {
    ll count = 0;

    // Handle the case where num is 0 separately
    if (num == 0) {
        return 1;
    }

    // Iterate through the digits of the number
    while (num != 0) {
        num /= 10;
        ++count;
    }

    return count;
}

ll trailingZeros(ll num) {
    ll count = 0;

    // Iterate through the digits of the number
    while (num > 0 && num % 10 == 0) {
        ++count;
        num /= 10;
    }

    return count;
}

void solve() {
    // Your solution code here

    ll n, m;
    cin >> n >> m;

    vector<ll> v(n);
    iv(v);

    vector<ll> f(n);

    ll total = 0;

    for(int i = 0; i < n; i++) {
        ll num = v[i];

        ll k = 0;

        total += countDigits(num);

        f[i] = trailingZeros(num);

    }

    sort(all(f), greater<ll>());

    ll count = 0;

    for(int i = 0; i < n; i += 2) {
        count += (f[i]);
    }

    // count = accumulate(all(f), 0);

    if(total - count - 1 >= m) {
        cout << "Sasha" << endl;
    }
    else {
        cout << "Anna" << endl;
    }

    // cout << total << endl;
    // cout << count << endl;
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
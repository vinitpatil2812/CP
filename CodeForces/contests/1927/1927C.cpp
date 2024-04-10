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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n), b(m);

    iv(a);
    iv(b);

    set<int> s1, s2, s3;

    for(auto i : a) {
        if(i > k) {
            continue;
        }

        s1.insert(i);
        s3.insert(i);
    }

    for(auto i : b) {
        if(i > k) {
            continue;
        }

        s2.insert(i);
        s3.insert(i);
    }

    if(s1.size() >= k / 2 && s2.size() >= k / 2 && s3.size() == k) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
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
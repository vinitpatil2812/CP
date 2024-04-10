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
    string s;
    cin >> s;

    int n = s.size(), result = 0;

    for(int i = 0; i < n; i++) {

        vector<int> a(26, 0);
        int q = 0;

        for(int j = i; j >= 0; j--) {
            if(s[j] == '?') {
                q++;
            }
            else {
                a[s[j] - 'a']++;
            }

            int count = 0;

            for(int k = 0; k < 26; k++) {
                if(a[k] % 2) {
                    count++;
                }
            }

            if(count <= q) {
                result = max(result, i - j + 1 - q + (q % 2 ? q - 1 : q));
            }
        }
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
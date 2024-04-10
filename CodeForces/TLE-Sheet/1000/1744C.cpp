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
    char c;
    cin >> n;
    cin >> c;

    string s;
    cin >> s;

    vector<int> pre(n, 0);

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'g') {
            break;
        }

        count++;
    }

    for(int i = n - 1; i >= 0; i--) {
        count++;

        if(s[i] == 'g') {
            count = 0;
        }

        pre[i] = count;
    }

    int result = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == c) {
            result = max(result, pre[i]);
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
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

    string s;
    cin >> s;

    int i = 0, j = s.size() - 1;

    while(i < j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        }
        else {
            break;
        }
    }

    if(s[i] > s[j]) {
        string r = s;
        reverse(all(r));
        // s += r;
        r += s;

        cout << r << endl;
    }
    else {
        cout << s << endl;
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
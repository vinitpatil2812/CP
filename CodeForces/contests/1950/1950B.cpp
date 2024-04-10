#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

string a = "##", b = "..";

void solve() {
    // Your solution code here
    int n;
    cin >> n;

    bool flag = 1;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }

        for(int j = 0; j < n; j++) {
            if(flag) {
                cout << a;
                // cout << a;
                flag = !flag;
            }
            else {
                cout << b;
                flag = !flag;
                // cout << b;
            }
        }cout << endl;
        if(i % 2 == 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }

        for(int j = 0; j < n; j++) {
            if(flag) {
                cout << a;
                // cout << a;
                flag = !flag;
            }
            else {
                cout << b;
                flag = !flag;
                // cout << b;
            }
        }cout << endl;
    }
    // cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t = 1;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
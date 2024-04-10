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
    int n, k, m;
    cin >> n >> k >> m;

    string s;
    cin >> s;

    vector<int> actual(k, 1), temp(k, 0);

    bool first = 0, last = 0;
    int total = 0;

    for(int i = 0; i < m; i++) {
        if(first && last) {
            if(actual != temp) {
                cout << "NO" << endl;
                string r = "";
                for(int j = 0; j < k; j++) {
                    if(!temp[j]) {
                        r.push_back('a' + j);
                    }
                }

                for(int j = 0; j < k; j++) {
                    if(temp[j]) {
                        r.push_back('a' + j);
                    }
                }
                cout << string(r, n) << endl;
                return;
            }
            else {
                total++;
                first = 0;
                last = 0;
            }
        } 

        if(s[i] == 'a') {
            first = 1;
        }

        if(s[i] == 'a' + k) {
            last = 1;
        }
    }

    if(total < n) {
        cout << "NO" << endl;
        string r = "";

        for(int i = 'a'; i <= 'z' && k; i++, k--) {
            r.push_back(i);
        }

        cout << string(r, n) << endl;
    }
    else {
        cout << "YES" << endl;
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
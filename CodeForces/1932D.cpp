#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    int n;
    cin >> n;

    char suit;
    cin >> suit;

    vector<string> v(2 * n);

    iv(v);

    vector<string> c, d, h, s;

    for(auto i : v) {
        if(i[1] == 'C') {
            c.push_back(i);
        }
        else if(i[1] == 'D') {
            d.push_back(i);
        }
        else if(i[1] == 'H') {
            h.push_back(i);
        }
        else {
            s.push_back(i);
        }
    }

    int extra = 0;

    if(suit != 'S') {
        extra += (s.size() % 2);
    }

    if(suit != 'H') {
        extra += (h.size() % 2);
    }

    if(suit != 'C') {
        extra += (c.size() % 2);
    }

    if(suit != 'D') {
        extra += (d.size() % 2);
    }

    vector<string> e;

    if(suit == 'H') {
        e = h;
    }

    if(suit == 'C') {
        e = c;
    }
    if(suit == 'S') {
        e = s;
    }
    if(suit == 'D') {
        e = d;
    }

    if(extra > e.size()) {
        cout << "IMPOSSIBLE" << endl;
        return;
    }

    vector<vector<string>> result;

    int i = 0;
    while(i + 1 < s.size() && suit != 'S') {
        result.push_back({s[i], s[i + 1]});
        i += 2;
    }

    i = 0;

    while(i + 1 < c.size() && suit != 'C') {
        result.push_back({c[i], c[i + 1]});
        i += 2;
    }

    i = 0;
    while(i + 1 < d.size() && suit != 'D') {
        result.push_back({d[i], d[i + 1]});
        i += 2;
    }

    i = 0;

    while(i + 1 < h.size() && suit != 'H') {
        result.push_back({h[i], h[i + 1]});
        i += 2;
    }

    i = 0;

    if(s.size() % 2 && suit != 'S') {
        result.push_back({s[s.size() - 1], e[i++]});
    }

    if(h.size() % 2 && suit != 'H') {
        result.push_back({h[h.size() - 1], e[i++]});
    }

    if(d.size() % 2 && suit != 'D') {
        result.push_back({d[d.size() - 1], e[i++]});
    }
    if(c.size() % 2 && suit != 'C') {
        result.push_back({c[c.size() - 1], e[i++]});
    }

    while(i + 1 < e.size()) {
        result.push_back({e[i], e[i + 1]});
        i += 2;
    }    

    for(auto itr : result) {
        sort(all(itr));

        if(itr[0][1] == suit && itr[1][1] != suit) {
            swap(itr[0], itr[1]);
        }
        
        cout << itr[0] << " " << itr[1] << endl;
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

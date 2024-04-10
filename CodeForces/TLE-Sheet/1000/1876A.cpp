#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, p;
        cin >> n >> p;

        vector<int> a(n), b(n);
        iv(a);
        iv(b);

        vector<pair<int, int>> v;

        for(int i = 0; i < n; i++) {
            v.push_back({b[i], a[i]});
        }

        sort(all(v), [&](pair<int, int> &a, pair<int, int> &b) {
            if(a.first == b.first) {
                return a.second > b.second;
            }

            return a.first < b.first;
        });

        ll sum = p, people = 1;

        for(int i = 0; i < n && people < n; i++) {
            // sum += p;
            // people++;

            ll need = min((ll)v[i].second, n - people);
            ll cost = min(v[i].first, p);
            sum += (need * cost);
            people += need;
        }

        

        cout << sum << endl;
    }

    return 0;
}

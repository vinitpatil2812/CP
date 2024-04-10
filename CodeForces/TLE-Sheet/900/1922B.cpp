#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

ll binomialCoefficient(int n, int r) {
    if (r == 0 || r == n) return 1;
    ll result = 1;
    r = min(r, n - r);
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        iv(v);

        sort(all(v));

        ll result = 0;

        vector<int> pre(n, 0);

        pre[0] = v[0];

        for(int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + v[i];
        }

        unordered_map<int, int> mp;
        unordered_map<int, int> idx;

        for(int i = 0; i < n; i++) {
            mp[v[i]]++;
        }

        for(int i = n - 1; i >= 0; i--) {
            idx[v[i]] = i;
        }

        // for(int i = 1; i < n; i++) {
        //     if(v[i] == v[i - 1]) 
        //         // result += binomialCoefficient((i), 2);
        //         result = result + (i - 1);
        // }

        if(n < 3) {
            cout << 0 << endl;
            continue;
        }

        if(mp.size() == 1) {
            cout << binomialCoefficient(n, 3) << endl;
            continue;
        }

        for(auto i : mp) {
            if(i.second > 1) {
                result += (binomialCoefficient(i.second, 2) * idx[i.first]);
            }
        }

        cout << result << endl;
    }

    return 0;
}

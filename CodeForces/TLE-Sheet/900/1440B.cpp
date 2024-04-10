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
        int n, k;
        cin >> n >> k;

        vector<int> v(n * k + 1);
        
        for(int i = 1; i <= n * k; i++) {
            cin >> v[i];
        }

        ll sum = 0;

        ll x = (n + 1) / 2 - 1;
        x = n - x;
        ll z = n * k + 1;

        while(k--) {
            z -= x;

            if(z <= 0) {
                break;
            }

            sum += v[z];
        }

        cout << sum << endl;
    }

    return 0;
}

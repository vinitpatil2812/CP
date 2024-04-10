#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool solve(ll mid, vector<ll> &attacks, ll n, ll h) {
    ll total = 0;

    for(int i = 0; i < n - 1; i++) {
        total += min(attacks[i + 1] - attacks[i], mid);
    }

    total += mid;

    return total >= h;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        ll n, h, result = -1;
        cin >> n >> h;

        vector<ll> attacks(n);

        for(int i = 0; i < n; i++) {
            cin >> attacks[i];
        }

        ll low = 1, high = LONG_LONG_MAX;

        while(low <= high) {
            ll mid = low + (high - low) / 2;

            if(solve(mid, attacks, n, h)) {
                result = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        cout << result << endl;
    }
    return 0;
}
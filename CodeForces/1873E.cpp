#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool canDistributeWater(ll mid, vector<ll>& waterLevels, ll n, ll x) {
    ll total = 0;

    for (int i = 0; i < n; i++) {
        if (waterLevels[i] <= mid) {
            total += mid - waterLevels[i];
        }

        if (total > x) {
            return false;
        }
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> waterLevels(n);

        for (int i = 0; i < n; i++) {
            cin >> waterLevels[i];
        }

        ll low = 1; 
        ll high = LONG_MAX;
        ll result = -1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (canDistributeWater(mid, waterLevels, n, x)) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << result << endl;
    }

    return 0;
}

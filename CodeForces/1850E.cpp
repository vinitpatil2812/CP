#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<int>& arr, int n, ll c, ll w) {
    ll total = 0;

    for (int i = 0; i < n; i++) {
        total += ((2 * w) + arr[i]) * ((2 * w) + arr[i]);

        if (total > c) {
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
        ll n, c;
        cin >> n >> c;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll low = 0, high = 1e9, result = -1;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (check(arr, n, c, mid)) {
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

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;

    vector<pair<int, int>> v;

    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        v.push_back({a, b});
    }

    int result = 1e9, low = 0, high = 1e9;

    auto check = [&](int k) {
        int x = 0, y = 0;

        for(auto [a, b] : v) {
            x -= k;
            y += k;

            x = max(x, a);
            y = min(y, b);

            if(x > y) {
                return false;
            }
        }

        return true;
    };

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(check(mid)) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << result << endl;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    return 0;
}

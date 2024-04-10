#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define int ll

bool solve(int mid, vector<int> &ing, vector<int> &ava, int n, int k) {
    for(int i = 0; i < n; i++) {
        int extra = ing[i] * mid - ava[i];

        if(extra > 0) {
            k -= extra;
        }

        if(k < 0) {
            return false;
        }
    }

    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> ing(n);
    vector<int> ava(n);

    for(int i = 0; i < n; i++) {
        cin >> ing[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> ava[i];
    }

    int low = 0, high = LONG_MAX, result = 0;

    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(solve(mid, ing, ava, n, k)) {
            result = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    cout << result << endl;
}
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t = 1;
    // cin >> t;

    // while(t--) {
        solve();
    // }

    return 0;
}
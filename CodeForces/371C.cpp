#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define int long long

bool isPossible(int mid, vector<int> &present, vector<int> &prices, int r, int b, int s, int c) {
    int required_b = max(0LL, b * mid - present[0]);
    int required_s = max(0LL, s * mid - present[1]);
    int required_c = max(0LL, c * mid - present[2]);

    int cost = required_b * prices[0] + required_s * prices[1] + required_c * prices[2];

    return cost <= r;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string recipe;
    cin >> recipe;

    vector<int> present(3), prices(3);

    for (int i = 0; i < 3; i++) {
        cin >> present[i];
    }

    for (int i = 0; i < 3; i++) {
        cin >> prices[i];
    }

    int r;
    cin >> r;

    int b = 0, s = 0, c = 0;

    for (int i = 0; i < recipe.size(); i++) {
        if (recipe[i] == 'B') {
            b++;
        } else if (recipe[i] == 'S') {
            s++;
        } else {
            c++;
        }
    }

    int low = 0, high = 1e15, result = 0;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(mid, present, prices, r, b, s, c)) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << result << endl;

    return 0;
}

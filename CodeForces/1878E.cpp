#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void build(int n, vector<vector<int>> &pre, vector<int> &a) {
    for(int i = 0; i < n; i++) { // Iterate up to n - 1
        for(int j = 0; j < 30; j++) {
            if((1 << j) & a[i]) {
                pre[i + 1][j] = pre[i][j] + 1;
            }
            else {
                pre[i + 1][j] = pre[i][j];
            }
        }
    }
}

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> pre(n + 1, vector<int> (30, 0));
    vector<int> a(n); // Change to n

    for(int i = 0; i < n; i++) { // Iterate up to n - 1
        cin >> a[i];
    }

    build(n, pre, a);

    int q;
    cin >> q;

    while(q--) {
        int l, k;
        cin >> l >> k;

        if(a[l - 1] < k) { // Adjust index
            cout << -1 << " ";
            continue;
        }

        int low = l, high = n, ans = l;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            int sum = 0;

            for(int j = 0; j < 30; j++) {
                if(pre[mid][j] - pre[l - 1][j] == mid - l + 1) {
                    sum += (1 << j);
                }
            }

            if(sum >= k) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }

        cout << ans << " ";
    }
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
        cout << endl;
    }

    return 0;
}

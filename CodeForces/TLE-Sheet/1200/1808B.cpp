#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator

const int mod = 1e9 + 7;

void solve() {
    // Your solution code here
    int n, m;
    cin >> n >> m;

    vector<ll> v[m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int x;
            cin >> x;

            v[j].push_back(x);
        }
    }

    for(int i = 0; i < m; i++) {
        sort(all(v[i]));
    }

    ll ans = 0;

    for(int i=0;i<m;i++){

        vector<ll>res(n,0);
        res[n-1]=v[i][n-1];
        for(int j=n-2;j>=0;j--){
            res[j]=res[j+1]+v[i][j];
        }

        for(int j=0;j<n-1;j++){
            ll cnt=res[j+1]-(n-1-j)*v[i][j];
            ans+=cnt;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

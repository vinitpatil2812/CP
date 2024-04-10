#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<ll> v(n - 1);
        vector<bool> vis(n + 1, false);
        vector<ll> extra;

        for(int i = 0; i < n - 1; i++) {
            cin >> v[i];
        }

        if(v[0] <= n) {
            vis[n] = true;
        }
        else {
            extra.push_back(v[0]);
        }

        for(int i = 1; i < n - 1; i++) {
            ll curr = v[i] - v[i - 1];

            vis[curr] = true;

            if(curr > n) {
                extra.push_back(curr);
            }
        }

        ll h = 0;

        for(int i = 1; i <= n; i++) {
            if(v[i] == false) {
                h += i;
            }
        }

        if(extra.size() > 1) {
            cout << "NO" << endl;
        }
        else {
            if(extra.size() > 0 && h == extra[0]) {
                cout << "YES" << endl;
            }
            else if(h == n) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
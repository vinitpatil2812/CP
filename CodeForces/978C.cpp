#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    cin >> n >> m;

    vector<ll> pre(n);
    ll sum = 0;

    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;

        sum += x;

        pre[i] = sum;
    }

    for(int i = 0; i < m; i++) {
        ll q;
        cin >> q;

        ll d = lower_bound(pre.begin(), pre.end(), q) - pre.begin();

        ll r = q - (d - 1 < 0 ? 0 : pre[d - 1]);

        cout << d + 1 << " " << r << endl;
    }
    return 0;
}
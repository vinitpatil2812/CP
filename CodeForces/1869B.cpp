#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    ll n, k, a, b;
    cin >> n >> k >> a >> b;

    vector<pair<ll, ll>> cities(n + 1);

    for(ll i = 1; i <= n; i++) {
        ll x, y;
        cin >> x >> y;

        cities[i] = {x, y};
    }

    pair<ll, ll> start = cities[a];
    pair<ll, ll> end = cities[b];

    ll first = 1e7;
    ll second = 1e7;

    for(ll i = 1; i <= k; i++) {
        first = min(first, abs(cities[i].first - start.first) + abs(cities[i].first - start.second));
        second = min(second, abs(cities[i].first - end.first) + abs(cities[i].first - end.second));
    }

    cout << first + second << endl;    
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
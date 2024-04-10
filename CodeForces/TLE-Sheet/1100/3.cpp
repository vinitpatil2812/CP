#ifdef _INTELLISENSE_
#include "headers.h"
#else
#include <bits/stdc++.h>
using namespace std;
#endif

#define ll long long
#define vec vector<ll>
#define vv vector<vec>
#define vvv vector<vv>
#define all(v) v.begin(), v.end()
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define II ({ int a; cin>>a; a; })
#define LL ({ ll a; cin>>a ; a; })
#define SS ({ string s; cin>>s; s; })
#define pf(x) cout << x << " "
#define pl(x) cout << x << endl
#define br cout << endl
#define pv(v) {{ for(auto &x : v) pf(x); } br;}
#define pvv(mat) { for(auto &r : mat) pv(r); }
#define iv(v) { for(auto &x : v) cin >> x; }

// unordered_map<ll, ll> mp_r, mp_g, mp_b, mp_y;


ll solve()
{
    ll n = LL, ans = 0;
    vec a(n), c(n);
    iv(a); iv(c);

    vv masks(4);
    vector<unordered_map<ll, ll>> mp(4);
    for (int i = 0; i < n; i++)
    {
        ll mask = 0;
        for (ll x = a[i]; x; x /= 10)
            mask |= (1LL << (x % 10));
        masks[c[i]].push_back(mask);
        mp[c[i]][mask]++;
    }

    for (int col = 0; col < 4; col++)
    {
        for (ll mask : masks[col])
        {
            for (int i = 0; i < 4; i++)
                if (i != col)
                    ans += (mp[i].size() - (mp[i].count(mask) ? mp[i][mask] : 0));
        }
    }
    
    return ans;
}

int main()
{
    fast;
    pl(solve());
    return 0;
}
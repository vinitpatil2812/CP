#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;
  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        ll a, b;
        cin >> a >> b;

        ll x, y;
        cin >> x >> y;

        ll p, q;
        cin >> p >> q;

        vector<pair<ll, ll>> king, queen;

        ll dirx[] = {a, a, -a, -a, b, b, -b, -b};
        ll diry[] = {b, -b, b, -b, a, -a, a, -a};

        for(int i = 0; i < 8; i++) {
            king.push_back({x + dirx[i], y + diry[i]});
            queen.push_back({p + dirx[i], q + diry[i]});
        }

        set<pair<ll, ll>> st;

        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                if(king[i] == queen[j]) {
                    st.insert(king[i]);
                }
            }
        }

        cout << st.size() << endl;
    }
    
    return 0;
}
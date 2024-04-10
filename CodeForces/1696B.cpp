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
        int n;
        cin >> n;

        int cnt = 0;

        vector<int> v(n);
        iv(v);

        for (int i = 1; i < n; i++)
        cnt += (v[i] == 0 && v[i - 1] != 0);
    cnt += v.back() != 0;
    cout <<  min(cnt, 2) << endl;;
    }
    
    return 0;
}
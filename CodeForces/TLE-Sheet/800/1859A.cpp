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

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        if(v[0] == v.back()) {
            cout << -1 << endl;
        }
        else {
            int i = 0;

            while(v[i] == v[0]) {
                i++;
            }

            cout << i << " " << n - i << endl;

            for(int j = 0; j < i; j++) {
                cout << v[j] << " ";
            }cout << endl;

            for(int j = i; j < n; j++) {
                cout << v[j] << " ";
            }cout << endl;
        }
    }
    
    return 0;
}
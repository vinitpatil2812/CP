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
        int n, k;
        cin >> n >> k;

        int count = n - k;

        for(int i = count; i > 0; i--) {
            cout << i + 1 << " ";
        }

        while(count + 2 <= k) {
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
    
    return 0;
}
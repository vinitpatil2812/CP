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
        ll n;
        cin >> n;

        ll count = 0;

        for(int i = 1; i <= n; i++) {
            if(n % i != 0) {
                break;
            }

            count++;
        }

        cout << count << endl;
    }
    
    return 0;
}
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
        iv(v);

        ll zero = 0, one = 0;

        for(auto i : v) {
            if(i == 0) {
                zero++;
            }
            else if(i == 1) {
                one++;
            }
        }

        ll s = (1LL << zero);
        s *= one;

        cout << s << endl;

        
    }
    
    return 0;
}
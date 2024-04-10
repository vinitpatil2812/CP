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

        bool five = false;
        bool zero = false;
        ll count = 0, result = n;

        while(n > 0) {
            ll d = n % 10;
            n /= 10;

            if((d == 2 || d == 7) && five) {
                result = min(result, count - 1);
            }
            else if((d == 0 || d == 5) && zero) {
                result = min(result, count - 1);
            }
            else {
                if(d == 0) {
                    zero = true;
                }

                if(d == 5) {
                    five = true;
                }
            }

            count++;
        }

        cout << result << endl;
    }
    
    return 0;
}
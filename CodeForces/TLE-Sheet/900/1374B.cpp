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

        if(n != 1 && n % 3 != 0) {
            cout << -1 << endl;
        }
        else {
            int count = 0;
            int two = 0;

            while(n > 1) {
                if(two > 6) {
                    break;
                }

                if(n % 6 == 0) {
                    n /= 6;
                    two = 0;
                }
                else {
                    n *= 2;
                    two++;
                }

                count++;
            }

            if(two > 6) {
                cout << -1 << endl;
            }
            else {
                cout << count << endl;
            }
        }
    }
    
    return 0;
}
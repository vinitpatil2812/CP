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

        int two = 0;

        vector<int> v(n);

        iv(v);

        for(int i = 0; i < n; i++) {
            if(v[i] == 2) {
                two++;
            }
        }

        if(two & 1) {
            cout << -1 << endl;
            continue;
        }
        else if(two == 0) {
            cout << 1 << endl;
            continue;
        }

        int count = 0;
        int result = -1;

        for(int i = 0; i < n; i++) {
            if(v[i] == 2) {
                count++;
            }

            if(count == two / 2) {
                result = i + 1;
                break;
            }
        }

        cout << result << endl;
    }
    
    return 0;
}
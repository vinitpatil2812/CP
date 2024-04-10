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

        string s;
        cin >> s;

        int result = 0, count = 0;
        bool valid = false;

        for(int i = 0; i < n; i++) {
            if(s[i] == '#') {
                result += count;
                count = 0;
            }
            else {
                count++;
            }

            if(count >= 3) {
                valid = true;
                break;
            }
        }

        result += count;

        if(valid) {
            cout << 2 << endl;
        }
        else {
            cout << result << endl;
        }
    }
    
    return 0;
}
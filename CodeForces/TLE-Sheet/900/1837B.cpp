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

        int result = 1, count = 1;

        for(int i = 1; i < n; i++) {
            if(s[i] != s[i - 1]) {
                count = 0;
            }

            count++;
            result = max(result, count);
        }

        cout << result + 1 << endl;
    }
    
    return 0;
}
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
        string a, b;
        cin >> a >> b;

        if(b.size() > a.size()) {
            string t = a;
            a = b;
            b = t;
        }

        string temp = a;

        bool result = true;

        for(int i = 0; i < a.size();) {
            if(a.size() > 400) {
                result = false;
                break;
            }

            if(i + b.size() > a.size()) {
                a += temp;
            }

            for(int j = 0; j < b.size(); j++, i++) {
                if(a[i] != b[j]) {
                    result = false;
                    break;
                }
            }

            if(result == false) {
                break;
            }

        }

        if(result == true) {
            cout << a << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
    
    return 0;
}
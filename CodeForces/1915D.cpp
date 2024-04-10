#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

bool isVowel(char c) {
    if(c == 'a' || c == 'e') {
        return true;
    }

    return false;
}

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    string result;

    for(int i = n - 1; i >= 0; i--) {
        if(isVowel(s[i])) {
            result.push_back(s[i--]);
            result.push_back(s[i]);
            result.push_back('.');
        }
        else {
            result.push_back(s[i--]);
            result.push_back(s[i--]);
            result.push_back(s[i]);
            result.push_back('.');
        }
    }

    result.pop_back();

    reverse(result.begin(), result.end());

    cout << result << endl;
}
  
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while(t--) {
        solve();
    }
    
    return 0;
}
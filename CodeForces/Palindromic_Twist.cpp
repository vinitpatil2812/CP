#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - i + 1] && (abs(s[i] - s[n - i + 1]) > 2 || abs(s[i] - s[n - i + 1]) == 1)) {
            // cout << "NO" << endl;
            return;
        }
    }

    // cout << "YES" << endl;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
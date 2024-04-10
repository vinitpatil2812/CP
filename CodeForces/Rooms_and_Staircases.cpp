#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int left = 0, right = 0;

    for(; left < n; left++) {
        if(s[left] == '1') {
            break;
        }
    }

    for(; right >= 0; right--) {
        if(s[right] == '1') {
            break;
        }
    }

    if(left != n) {
        cout << max((n - left) * 2, (right + 1) * 2) << endl;
    }
    else {
        cout << n << endl;
    }
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
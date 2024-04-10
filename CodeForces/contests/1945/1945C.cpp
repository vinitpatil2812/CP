#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector<int> a(n + 1, 0); // Increase size by 1
    vector<int> b(n + 1, 0); // Increase size by 1

    int count = 0, result = n + 1;

    for(int i = 1; i <= n; i++) { // Start from 1 to handle prefix sum
        if(s[i - 1] == '0') {
            count++;
        }
        else {
            count--;
        }

        a[i] = count;
    }

    count = 0;

    for(int i = n; i >= 1; i--) { // Start from n to handle prefix sum
        b[i] = count;
        count += (s[i - 1] == '0' ? -1 : 1);
    }

    double side = n / 2.0; // Adjust to double

    for(int i = 1; i <= n; i++) { // Iterate up to n
        if(a[i] >= 0 && b[i] >= 0) {
            double current_side = i / 2.0; // Adjust to double
            if(current_side <= side) {
                result = i;
                side = current_side;
            }
        }
    }

    if(side >= (double)(n / 2.0)) {
        result = 0;
    }

    if(result == n + 1) {
        result = 0;
    }

    cout << result << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}

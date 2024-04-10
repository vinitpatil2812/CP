#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> b;
vector<int> pos(100000 + 5, 0); // Initialize pos vector here

void solve() {
    int n;
    cin >> n;

    if (pos[n] == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    pos[1] = 1;

    int t;
    cin >> t;

    for (long long i = 1; i <= 100000; i++) {
        string s = to_string(i);
        if ((*max_element(s.begin(), s.end())) <= '1') {
            b.push_back(i);
        }
    }

    for (long long i = 1; i <= 100000 + 5; i++) {
        if (pos[i] == 1) {
            for (long long e : b) {
                if (i * e <= 100000) {
                    pos[e * i] = 1;
                }
            }
        }
    }

    while (t--) {
        solve();
    }

    return 0;
}

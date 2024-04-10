#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<char>> s(n, vector<char>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> s[i][j];
            }
        }

        int result = 0;

        for (int i = 0; i < n / 2; i++) {
            for (int j = 0; j < n / 2; j++) {
                vector<char> v;

                v.push_back(s[i][j]);
                v.push_back(s[j][n - 1 - i]);
                v.push_back(s[n - 1 - i][n - 1 - j]);
                v.push_back(s[n - 1 - j][i]);

                sort(v.begin(), v.end());

                for (auto c : v) {
                    result += v.back() - c;
                }
            }
        }

        cout << result << endl;
    }
    return 0;
}

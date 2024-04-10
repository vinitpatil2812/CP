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

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> result;

        for(int i = n - 1; i > 0; i--) {
            result.push_back(v[i]);

            if(v[i] < v[i - 1]) {
                result.push_back(v[i]);
            }
        }

        result.push_back(v[0]);

        cout << result.size() << endl;

        for(int i = result.size() - 1; i >= 0; i--) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
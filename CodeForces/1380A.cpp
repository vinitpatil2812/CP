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
        iv(v);
        
        int i = 0, k = n - 1;

        while(i < n - 1 && v[i] > v[i + 1]) {
            i++;
        }

        while(k > 0 && v[k - 1] < v[k]) {
            k--;
        }

        if(i >= k) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;

            cout << i + 1 << " ";

            for(int j = i + 1; j < k; j++) {
                if(v[j] > v[i] && v[j] > v[k]) {
                    cout << j + 1<< " ";
                    break;
                }
            }

            cout << k + 1 << endl;
        }
    }
    
    return 0;
}
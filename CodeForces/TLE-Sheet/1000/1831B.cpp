#include<bits/stdc++.h>
  
using namespace std;
  
#define ll long long
#define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
#define iv(v) { for(auto &x : v) cin >> x; } // inputVector
#define all(v) v.begin(), v.end() // first and last iterator
  
const int mod = 1e9 + 7;

void first(vector<int> &a, int &mx, int &sz) {
    int count = 0;
    int n = a.size();

    for(int i = 0; i < n - 1; i++) {
        if(a[i] != a[i + 1]) {
            count = 1;
        }
        else {
            count++;
        }

        if(count > sz) {
            mx = a[i];
            sz = count;
        }
    }
}

int find(vector<int> v, int tr) {
    int n = v.size();
    int count = 1;
    int sz = 0;

    for(int i = 0; i < n - 1; i++) {
        if(v[i] == v[i + 1] && v[i] == tr) {
            count++;
        }
        else {
            count = 1;
        }

        sz = max(sz, count);
    }

    if(sz == 1) {
        bool found = false;

        for(auto i : v) {
            if(i == tr) {
                found = true;
                break;
            }
        }

        if(!found) {
            sz = 0;
        }
    }

    return sz;
}

void solve() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    iv(a);
    iv(b);

    int fmx = -1;
    int fsz = 0;

    int smx = -1;
    int ssz = 0;

    first(a, fmx, fsz);
    first(b, smx, ssz);

    int result = max(fsz + find(b, fmx), ssz + find(a, smx));

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
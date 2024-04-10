#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void prt(vector<pair<int, int>> arr) {
    cout << arr.size() << endl;
    
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int all = 0;

    for(int i = 0; i < n; i++) {
        all ^= arr[i];
    }

    vector<int> first(n, all);
    vector<pair<int, int>> ans;

    ans.push_back({1, n});

    if(all == 0) {
        prt(ans);
    }
    else {
        if(n % 2 == 0) {
            ans.push_back({1, n});
            prt(ans);
        }
        else {
            ans.push_back({1, n - 1});
            ans.push_back({n, n});
            prt(ans);
        }
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
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++) {
            mp[s[i]]++;
        }

        int count = 0;

        for(auto itr : mp) {
            if(itr.second % 2 != 0) {
                count++;
            }
        }

        if(count - 1 <= k) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
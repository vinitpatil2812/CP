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
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        unordered_map<int, int> mp;

        for(auto e : arr) {
            for(int i = 2; i * i <= e; i++) {
                while(e % i == 0) {
                    mp[i]++;

                    e /= i;
                }
            }

            if(e > 1) {
                mp[e]++;
            }
        }

        int result = 1;

        for(auto i : mp) {
            result &= (i.second % n == 0);
        }

        if(result) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
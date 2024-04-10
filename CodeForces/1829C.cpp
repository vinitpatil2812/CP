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

        map<string, int> mp;

        mp["00"] = mp["01"] = mp["10"] = mp["11"] = 1e9;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            string s;
            cin >> s;

            mp[s] = min(mp[s], x);
        }

        if(min(mp["11"], mp["01"] + mp["10"]) > 1e7) {
            cout << -1 << endl;
        } 
        else {
            cout << min(mp["11"], mp["01"] + mp["10"]) << endl;
        }

    }
    return 0;
}
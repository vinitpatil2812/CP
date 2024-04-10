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
        string s;
        cin >> s;

        bool all = (s[0] == 'B' || s[s.length() - 1] == 'B');

        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == s[i + 1] && s[i] == 'B') {
                all = true;
            }
        }

        vector<int> lens;
        int curr = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'A') {
                curr++;
            }
            else {
                if(curr != 0) {
                    lens.push_back(curr);
                    curr = 0;
                }
            }
        }

        if(curr != 0) {
            lens.push_back(curr);
        }

        sort(lens.begin(), lens.end());

        if(lens.empty()) {
            cout << 0 << endl;
            continue;
        }

        int total = 0;

        if(all) {
            total += lens[0];
        }

        for(int i = 1; i < lens.size(); i++) {
            total += lens[i];
        }

        cout << total << endl;
    }
    return 0;
}
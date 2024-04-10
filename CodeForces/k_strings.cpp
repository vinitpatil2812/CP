#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int k;
    cin >> k;

    string s;
    cin >> s;

    unordered_map<char, int> mp;

    for(int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }

    string ans = "";

    bool possible = true;

    for(auto itr : mp) {
        char c = itr.first;
        int ct = itr.second;

        if(ct % k != 0) {
            possible = false;
            break;
        }

        int num = ct / k;

        for(int i = 0; i < num; i++) {
            ans.push_back(c);
        }
    }

    if(possible) {
        string result = "";

        for(int i = 0; i < k; i++) {
            result += ans;
        }

        cout << result;
    }
    else {
        cout << "-1" << endl;
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
        return 1;
    }

    return 0;
}

int main() {
    string s;
    cin >> s;

    int n = s.length();
    string ans = "";

    for(int i = 0; i < n; i++) {
        char c = tolower(s[i]);

        if(!isVowel(c)) {
            ans.push_back('.');
            ans.push_back(c);
        }
    }

    cout << ans << endl;

    return 0;
}
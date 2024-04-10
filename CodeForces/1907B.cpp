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

        int n = s.size();
        vector<int> visited(n, 0);

        stack<int> upper, lower;

        for(int i = 0; i < n; i++) {
            if(s[i] == 'b') {
                if(!lower.empty()) {
                    visited[lower.top()] = 1;
                    lower.pop();
                }

                visited[i] = 1;
            }
            else if(s[i] == 'B') {
                if(!upper.empty()) {
                    visited[upper.top()] = 1;
                    upper.pop();
                }

                visited[i] = 1;
            }
            else if(s[i] >= 'A' && s[i] <= 'Z') {
                upper.push(i);
            }
            else if(s[i] >= 'a' && s[i] <= 'z') {
                lower.push(i);
            }
        }

        string result = "";

        for(int i = 0; i < n; i++) {
            if(!visited[i]) {
                result.push_back(s[i]);
            }
        }

        cout << result << endl;
    }
    return 0;
}

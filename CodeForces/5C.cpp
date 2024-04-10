#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;

    int n = s.size();
    int len = 0, cnt = 0;

    stack<int> st;
    vector<int> dp(n, 0);

    for(int i = 0; i < n; i++) {
        char c = s[i];

        if(c == '(') {
            st.push(i);
            continue;
        }

        if(st.empty()) {
            continue;
        }

        int j = st.top();
        st.pop();

        dp[i] = i - j + 1 + (j >= 1 ? dp[j - 1] : 0);

        if(dp[i] > len) {
            len = dp[i];
            cnt = 1;
        }
        else if(dp[i] == len){
            cnt++;
        }
    }

    if(len == 0) {
        cout << 0 << " " << 1 << endl;
    }
    else {
        cout << len << " " << cnt << endl;
    }
    
    return 0;
}
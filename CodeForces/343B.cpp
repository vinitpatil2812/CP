#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    stack<char> st;
    st.push(s[0]);

    for(int i = 1; i < s.size(); i++) {
        bool flag = 1;

        while(!st.empty() && s[i] == st.top()) {
            flag = 0;
            st.pop();
        }

        if(flag) {
            st.push(s[i]);
        }
    }

    if(st.empty()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
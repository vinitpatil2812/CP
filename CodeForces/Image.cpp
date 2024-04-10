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
        unordered_set<char> st;

        for(int i = 0; i < 4; i++) {
            char c;
            cin >> c;

            st.insert(c);
        }

        cout << st.size() - 1 << endl;        
    }

    return 0;
}
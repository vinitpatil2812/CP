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
        int result = 0;

        string a = "codeforces";

        for(int i = 0; i < 10; i++) {
            if(a[i] != s[i]) {
                result++;
            }
        }

        cout << result << endl;
    }
    return 0;
}
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

        int result = 4;
        int cur = 1;

        for(int i = 0; i < 4; i++) {
            int c = s[i] - '0';

            if(c == 0) {
                result += abs(10 - cur); 
                cur = 10;
            }
            else {
                result += abs(c - cur);
                cur = c;
            }
        }

        cout << result << endl;
    }
    return 0;
}
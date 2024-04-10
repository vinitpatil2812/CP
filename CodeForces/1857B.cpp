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

        int c = 0;
        int idx = 0;

        for(int i = s.size(); i >= 0; i++) {
            int temp = s[i] - '0';
            temp += c;
            c = 0;

            int prev = (i - 1 < 0 ? 0 : s[i - 1] - '0');

            if(prev >= 5) {
                temp++;
                idx = i;
            }

            c = temp % 10;
            temp /= 10;
        }

        if(idx >= 0) {
            s[idx] = '0';
            idx--;
        }

        if(c > 0) {
            cout << 1;
        }

        cout << s << endl;
    }
    return 0;
}
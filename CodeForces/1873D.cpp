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
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int count = 0;

        for(int j = 0; j < s.size(); j++) {
            if(s[j] == 'B') {
                count++;
                j += k - 1;
            }
        }

        cout << count << endl;
    }
    return 0;
}
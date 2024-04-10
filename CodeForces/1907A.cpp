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

        // Convert the second character of the string to a numeric value
        int col = s[1] - '0' - 1;

        // Output all possible moves in the same row
        for(char i = 'a'; i <= 'h'; i++) {
            if(i != s[0]) {
                cout << i << s[1] << endl;
            }
        }

        // Output all possible moves in the same column
        for(int i = 1; i <= 8; i++) {
            if(i != col + 1) {
                cout << s[0] << i << endl;
            }
        }
    }
    return 0;
}

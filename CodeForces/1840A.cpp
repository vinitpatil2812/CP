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
        int n;
        cin >> n;

        string s;
        cin >> s;

        string result = "";
        
        int i = 0, j = 1;

        while(i < n && j < n) {
            while(s[i] != s[j]) {
                j++;
            }

            result.push_back(s[i]);

            i = j + 1;
            j = i + 1;
        }
        
        cout << result << endl;
    }

    return 0;
}
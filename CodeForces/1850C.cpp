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
        string result = "";

        for(int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                char c;
                cin >> c;

                if(c != '.') {
                    result.push_back(c);
                }
            }
        }

        cout << result << endl;
    }

    return 0;
}
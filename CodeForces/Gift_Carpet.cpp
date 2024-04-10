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
        int n, m;
        cin >> n >> m;

        vector<vector<char>> carpet(n, vector<char> (m));

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> carpet[i][j];
            }
        }

        string vika = "vika";
        int index = 0;

        for(int i = 0; i < m; i++) { // Iterate over columns
            for(int j = 0; j < n; j++) { // Iterate over rows
                if (index < vika.size() && carpet[j][i] == vika[index]) {
                    index++;
                    break;
                }
            }
        }

        if(index == vika.size()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

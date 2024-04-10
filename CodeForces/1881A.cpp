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
        
        string x, s;
        cin >> x >> s;

        int result = -1;

        for(int i = 0; i <= 10; i++) {
            if(x.find(s) != string :: npos) {
                result = i;
                break;
            }

            x += x;
        }

        cout << result << endl;
    }
    return 0;
}
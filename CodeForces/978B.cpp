#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int result = 0, count = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'x') {
            count++;

            if(count > 2) {
                result++;
            }
        }
        else {
            count = 0;
        }
    }

    cout << result;
    return 0;
}
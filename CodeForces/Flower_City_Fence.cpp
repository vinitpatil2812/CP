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

        vector<int> fence(n);

        for(int i = 0; i < n; i++) {
            cin >> fence[i];
        }

        int start = 0, end = n - 1;
        string ans = "YES"; // Initialize the answer to "YES"

        while(start < end) {
            if(fence[start + 1] - fence[start] != fence[end] - fence[end - 1]) {
                ans = "NO";            
                break; // Break the loop when the condition is not met
            }

            start++;
            end--;
        }

        cout << ans << endl;
    }
    
    return 0;
}

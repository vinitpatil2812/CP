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

        int pro = 1;
        vector<int> num(n);
        bool used = false;

        for(int i = 0; i < n; i++) {
            cin >> num[i];
        }

        sort(num.begin(), num.end());

        // num[n - 1]++;

        for(int i = 0; i < n; i++) {
            if(num[i] == 0 && !used) {
                num[i]++;
                used = true;
                // num[n - 1]--;
                
            }
            else if(num[i] == 1 && !used) {
                num[i]++;
                used = true;
            }

            pro *= num[i];
        }

        if(!used) {
            pro /= num[0];
            pro *= (num[0] + 1);
        }

        cout << pro << endl;
    }

    return 0;
}
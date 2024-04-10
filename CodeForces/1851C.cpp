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

        vector<int> v(n);

        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int i = 0, count1 = 0;

        while(i < n && count1 < k) {
            if(v[i] == v[0]) {
                count1++;
            }

            i++;
        }

        i--;

        int j = n - 1, count2 = 0;

        while(j > i && j >= 0 && count2 < k) {
            if(v[n - 1] == v[j]) {
                count2++;
            }

            j--;
        } 

        if(v[0] == v[n - 1] && count1 >= k) {
            cout << "YES" << endl;
        }
        else if(count1 >= k && count2 >= k) {
            cout << "YES" << endl;
        }
        else if(k == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
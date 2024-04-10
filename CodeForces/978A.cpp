#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    unordered_map<int, int> mp;
    vector<int> arr(n);
    vector<int> result;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = n -1; i >= 0; i--) {
        int x;
        x = arr[i];

        if(mp.find(x) == mp.end()) {
            result.push_back(x);
        }

        mp[x]++;
    }
    cout << result.size() << endl;
    for(int i = result.size() - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }


    return 0;
}
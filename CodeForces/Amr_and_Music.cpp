#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    vector<int> instruments(n);

    for(int i = 0; i < n; i++) {
        cin >> instruments[i];
    }

    vector<pair<int, int>> ans (n);

    for(int i = 0; i < n; i++) {
        ans[i] = {instruments[i], i};
    }    

    sort(ans.begin(), ans.end());

    int idx = 0;
    vector<int> result;

    while(k > 0) {
        result.push_back(ans[idx].second);
        k -= ans[idx].first;
        idx++;
    }

    if(k < 0) {
        cout << result.size() - 1 << endl;

        for(int i = 0; i < result.size() - 1; i++) {
            cout << result[i] + 1 << " ";
        }cout << endl;        
    }
    else {
        cout << result.size() << endl;

        for(int i = 0; i < result.size(); i++) {
            cout << result[i] + 1 << " ";
        }cout << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve() {
    int n;
    cin >> n;

    int power = 1;
    vector<int> ans;

    while(n > 0) {
        if(n % 10 > 0) {
            ans.push_back((n % 10) * power);
        } 

        n /= 10;
        power *= 10;
    }

    cout << ans.size() << endl;

    for(auto number : ans) {
        cout << number << " ";
    }cout << endl;
}
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
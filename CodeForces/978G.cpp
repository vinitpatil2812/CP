#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> ans(n);
    vector<tuple<int, int, int, int>> exams;

    for(int i = 0; i < m; i++) {
        int s, d, c;
        cin >> s >> d >> c;
        s--, d--;

        exams.emplace_back(d, s, c, i);
        ans[d] = m + 1;
    }

    sort(exams.begin(), exams.end());

    for(auto [d, s, c, i] : exams) {
        for(int z = s; z < d && c > 0; z++) {
            if(ans[z] == 0) {
                ans[z] = i + 1;
                c--;
            }    
        }

        if(c > 0) {
            cout << -1;
            return 0;
        }
    }

    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}
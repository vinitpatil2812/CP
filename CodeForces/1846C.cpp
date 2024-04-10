#include<bits/stdc++.h>
using namespace std;
#define int long long int
  
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n, m, h;
        cin >> n >> m >> h;

        pair<int, int> v;
        int result = 1.;

        for(int i = 0; i < n; i++) {
            vector<int> temp(m);

            for(int j = 0; j < m; j++) {
                cin >> temp[j];
            }

            sort(temp.begin(), temp.end());

            int timer = 0, score = 0, penalty = 0;

            for(int j = 0; j < m; j++) {
                if(timer + temp[j] <= h) {
                    score++;
                    timer += temp[j];
                    penalty += timer;   
                }
                else {
                    break;
                }
            }

            if(i) {
                if(make_pair(-score, penalty) < v) {
                    result++;
                }
            }
            else {
                v = {-score, penalty};
            }
        }

        // if(m == 1) {
        //     v.push_back()
        // }
        // int ra = v[0].first, rb = v[0].second;

        // sort(v.begin(), v.end(), [&](pair<int, int> &a, pair<int, int> &b) {
        //     if(a.first == b.first) {
        //         return a.second <= b.second;
        //     }
            
        //     return a.first > b.first;
        // });

        // int result = 0;

        // for(int i = 0; i < n; i++) {
        //     if(v[i].first == ra && v[i].second == rb) {
        //         result = i + 1;
        //         break;
        //     }
        // }

        // for(int i = 0; i < n; i++) {
        //     cout << i << " -> " << " { " <<v[i].first << "," << v[i].second << " } "<< ", ";
        // }cout << endl;

        cout << result << endl;
    }
    return 0;
}
// #include<bits/stdc++.h>
  
// using namespace std;
  
// #define ll long long
// #define pv(v) { for(auto &x : v) cout << x << " "; cout << endl; } // printVector
// #define iv(v) { for(auto &x : v) cin >> x; } // inputVector
// #define all(v) v.begin(), v.end() // first and last iterator
  
// const int mod = 1e9 + 7;

// void solve() {
//     int n;
//     cin >> n;

//     vector<vector<int>> mat(n, vector<int> (3, 0));

//     for(int i = 0; i < n; i++) {
//         cin >> mat[i][0];
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> mat[i][1];
//     }

//     for(int i = 0; i < n; i++) {
//         cin >> mat[i][2];
//     }

//     priority_queue<ll> pq;

//     for(int i = 0; i < n; i++) {
//         priority_queue<ll> temp;

//         for(int j = 0; j < 3; j++) {
//             temp.push(mat[i][j]);
//         }

//         pq.push(temp.top());
//     }

//     ll result = 0, k = 3;

//     while(!pq.empty() && k > 0) {
//         result += pq.top();
//         pq.pop();
//         k--;
//     }

//     cout << result << endl;
// }
  
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     int t;
//     cin >> t;

//     while(t--) {
//         solve();
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Element {
    int value;
    int index;

    Element(int val, int idx) : value(val), index(idx) {}
};

bool compare(const Element &a, const Element &b) {
    return a.value > b.value;
}

void maxSumNoMatch(int n, vector<Element> &arr1, vector<Element> &arr2, vector<Element> &arr3) {
    sort(arr1.begin(), arr1.end(), compare);
    sort(arr2.begin(), arr2.end(), compare);
    sort(arr3.begin(), arr3.end(), compare);

    int result = 0;
    for (int x = 0; x < 3; x++) {
        for (int y = 0; y < 3; y++) {
            for (int z = 0; z < 3; z++) {
                if (arr1[x].index != arr2[y].index && arr1[x].index != arr3[z].index && arr2[y].index != arr3[z].index) {
                    result = max(result, arr1[x].value + arr2[y].value + arr3[z].value);
                }
            }
        }
    }
    cout << result << endl;
}

int main() {
    int t_cases;
    cin >> t_cases;

    while (t_cases--) {
        int size;
        cin >> size;

        vector<Element> array1(size);
        vector<Element> array2(size);
        vector<Element> array3(size);

        for (int i = 0; i < size; i++) {
            cin >> array1[i].value;
            array1[i].index = i + 1;
        }

        for (int i = 0; i < size; i++) {
            cin >> array2[i].value;
            array2[i].index = i + 1;
        }

        for (int i = 0; i < size; i++) {
            cin >> array3[i].value;
            array3[i].index = i + 1;
        }

        maxSumNoMatch(size, array1, array2, array3);
    }

    return 0;
}

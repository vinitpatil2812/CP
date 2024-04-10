#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n;
    cin >> m >> n;

    vector<vector<int>> matA(m, vector<int>(n, 0));
    vector<vector<int>> matB(m, vector<int>(n, 0));
    vector<int> rowB(m, 0);
    vector<int> colB(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matB[i][j];

            if (matB[i][j] == 1) {
                rowB[i] = 1;
                colB[j] = 1;
            }
        }
    }

    // Reset loop variables
    int i = 0, j = 0;

    for (; i < m; i++) {
        for (j = 0; j < n; j++) { // Reset j before using it
            if (i == j) {
                if (rowB[i] || colB[j]) { // Use logical OR
                    matA[i][j] = 1;
                }
            }
        }
    }

    i = 0; // Reset i before using it

    while (i < m) {
        if (rowB[i] || colB[n - 1]) { // Use logical OR
            matA[i][n - 1] = 1;
        }

        i++;
    }

    j = 0; // Reset j before using it

    while (j < n) {
        if (rowB[m - 1] || colB[j]) { // Use logical OR
            matA[m - 1][j] = 1;
        }

        j++;
    }

    vector<int> rowA(m, 0);
    vector<int> colA(n, 0);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matA[i][j]) {
                rowA[i] = 1;
                colA[j] = 1;
            }
        }
    }

    if (rowA == rowB && colA == colB) {
        cout << "YES" << endl;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << matA[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}

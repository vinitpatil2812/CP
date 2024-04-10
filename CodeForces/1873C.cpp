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
        int total = 0;
        vector<int> score(6);

        for(int i = 1; i <= 5; i++) {
            score[i] = i;
        }

        for(int i = 1; i <= 5; i++) {
            for(int j = 1; j <= 5; j++) {
                char c;
                cin >> c;
                if(c == 'X')
                    total += score[min(i, j)];
            }

            for(int j = 5; j >= 1; j--) {
                char c;
                cin >> c;

                if(c == 'X')
                    total += score[min(i, j)];
            }
        }

        for(int i = 5; i >= 1; i--) {
            for(int j = 1; j <= 5; j++) {
                char c;
                cin >> c;
                if(c == 'X')
                    total += score[min(i, j)];
            }

            for(int j = 5; j >= 1; j--) {
                char c;
                cin >> c;

                if(c == 'X')
                    total += score[min(i, j)];
            }
        }

        cout << total << endl;
    }

    return 0;
}
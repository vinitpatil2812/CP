#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> coins;

    for(int i = 0; i < n; i++) {
        int num;
        cin >> num;

        coins.push_back(num);
    }

    sort(coins.begin(), coins.end(), greater<int> ());

    int total = accumulate(coins.begin(), coins.end(), 0);

    int count = 0;
    int sum = 0;

    for(int i = 0; i < n; i++) {
        if(sum <= (total) / 2) {
            count++;
            sum += coins[i];
        }
        else {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
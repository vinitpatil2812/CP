#include<bits/stdc++.h>
using namespace std;
#define ll long long int
  
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    sort(nums.begin(), nums.end());

    if(nums[n - 2] + nums[n - 3] > nums[n - 1]) {
        cout << "YES" << endl;

        swap(nums[n - 1], nums[n - 2]);

        for(int i = 0; i < n; i++) {
            cout << nums[i] << " ";
        }cout << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}
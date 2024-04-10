#include <iostream>
#include <string>
using namespace std;

int solve() {
    int n;
    cin >> n;

    string strin;
    cin >> strin;

    int cnt[26] = {0};
    for (char c : strin) {
        cnt[c - 'a']++;
    }

    int maxCnt = 0;
    for (int i = 0; i < 26; i++)
        maxCnt = max(maxCnt, cnt[i]);

    int result = 0;
    if (maxCnt > n / 2) {
        result = 2 * maxCnt - n;
    } else if (n % 2 == 1) {
        result = 1;
    } else {
        result = 0;
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cout << solve() << endl;
    }

    return 0;
}

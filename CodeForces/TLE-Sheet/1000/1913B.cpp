#include <iostream>
#include <string>
#include <vector>

int main() {
    int t;
    std::cin >> t;

    for (int _ = 0; _ < t; ++_) {
        std::string s;
        std::cin >> s;

        std::vector<int> cnt(2, 0);
        for (int i = 0; i < s.length(); ++i) {
            cnt[s[i] - '0'] += 1;
        }

        for (int i = 0; i <= s.length(); ++i) {
            if (i == s.length() || cnt[1 - (s[i] - '0')] == 0) {
                std::cout << s.length() - i << std::endl;
                break;
            }
            cnt[1 - (s[i] - '0')] -= 1;
        }
    }

    return 0;
}

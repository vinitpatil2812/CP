#include <iostream>
#include <vector>
#include <string>

using namespace std;

class BigInt {
private:
    vector<int> digits;

public:
    BigInt() {}

    BigInt(string s) {
        for (int i = s.size() - 1; i >= 0; --i)
            digits.push_back(s[i] - '0');
    }

    BigInt(int n) {
        while (n) {
            digits.push_back(n % 10);
            n /= 10;
        }
    }

    void print() {
        for (int i = digits.size() - 1; i >= 0; --i)
            cout << digits[i];
        cout << endl;
    }

    BigInt operator+(const BigInt& other) {
        BigInt result;
        int carry = 0;
        int i = 0;
        while (i < digits.size() || i < other.digits.size() || carry) {
            if (i < digits.size()) carry += digits[i];
            if (i < other.digits.size()) carry += other.digits[i];
            result.digits.push_back(carry % 10);
            carry /= 10;
            i++;
        }
        return result;
    }

    BigInt operator-(const BigInt& other) {
        BigInt result;
        int borrow = 0;
        for (int i = 0; i < digits.size(); ++i) {
            int sub = digits[i] - borrow;
            if (i < other.digits.size())
                sub -= other.digits[i];
            if (sub < 0) {
                sub += 10;
                borrow = 1;
            } else {
                borrow = 0;
            }
            result.digits.push_back(sub);
        }
        while (result.digits.size() > 1 && result.digits.back() == 0)
            result.digits.pop_back();
        return result;
    }

    BigInt operator*(const BigInt& other) {
        BigInt result;
        result.digits.resize(digits.size() + other.digits.size(), 0);
        for (int i = 0; i < digits.size(); ++i) {
            int carry = 0;
            for (int j = 0; j < other.digits.size() || carry; ++j) {
                int sum = result.digits[i + j] + digits[i] * (j < other.digits.size() ? other.digits[j] : 0) + carry;
                result.digits[i + j] = sum % 10;
                carry = sum / 10;
            }
        }
        while (result.digits.size() > 1 && result.digits.back() == 0)
            result.digits.pop_back();
        return result;
    }

    BigInt operator/(const BigInt& other) {
        BigInt result, current;
        for (int i = digits.size() - 1; i >= 0; --i) {
            current.digits.insert(current.digits.begin(), digits[i]);
            int x = 0, l = 0, r = 10;
            while (l <= r) {
                int m = (l + r) / 2;
                BigInt t = other * m;
                if (t <= current) {
                    x = m;
                    l = m + 1;
                } else {
                    r = m - 1;
                }
            }
            result.digits.insert(result.digits.begin(), x);
            current = current - (other * x);
        }
        while (result.digits.size() > 1 && result.digits.back() == 0)
            result.digits.pop_back();
        return result;
    }

    bool operator<=(const BigInt& other) const {
        if (digits.size() != other.digits.size())
            return digits.size() < other.digits.size();
        for (int i = digits.size() - 1; i >= 0; --i) {
            if (digits[i] != other.digits[i])
                return digits[i] < other.digits[i];
        }
        return true;
    }
};

void solve() {
    string n_str, k_str;
    cin >> n_str >> k_str;

    BigInt n(n_str), k(k_str);

    BigInt p = n / k;

    if (n / p == k) {
        cout << "YES" << endl;
        cout << 1 << endl;
        p.print();
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

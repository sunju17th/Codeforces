#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Hàm ki?m tra chu?i ð?i x?ng
bool isPalindrome(const string& s, int start, int length) {
    int end = start + length - 1;
    while (start < end) {
        if (s[start] != s[end]) return false;
        start++;
        end--;
    }
    return true;
}

int main() {
    string S;
    cin >> S;
    int T;
    cin >> T;

    while (T--) {
        int k;
        cin >> k;

        vector<int> lengths(k);
        int total_length = 0;
        for (int i = 0; i < k; ++i) {
            cin >> lengths[i];
            total_length += lengths[i];
        }

        // Ki?m tra n?u t?ng ð? dài các chu?i vý?t quá ð? dài chu?i S
        if (total_length > S.size()) {
            cout << "NO" << endl;
            continue;
        }

        // Ki?m tra kh? nãng c?t chu?i
        bool valid = true;
        int start = 0;
        for (int i = 0; i < k; ++i) {
            if (!isPalindrome(S, start, lengths[i])) {
                valid = false;
                break;
            }
            start += lengths[i];
        }

        // Xu?t k?t qu?
        if (valid) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}


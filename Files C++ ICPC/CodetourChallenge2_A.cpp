#include <bits/stdc++.h>
using namespace std;

// Ki?m tra theo ngý?c quy t?c: thay các h?u t? (ABA, BA, AB) -> 'A'
// allowBA: n?u true th? cho phép gi?m "BA" (dùng cho An). N?u false (Binh) th? không.
bool canGenerate(const string &s, bool allowBA) {
    int n = (int)s.size();
    string st; st.reserve(n);
    for (int i = 0; i < n; ++i) {
        st.push_back(s[i]);

        // sau m?i l?n push, c? g?ng gi?m liên t?c n?u có m?u phù h?p
        bool reduced;
        do {
            reduced = false;
            int m = (int)st.size();
            // 1) ýu tiên ABA -> A
            if (m >= 3) {
                if (st[m-3] == 'A' && st[m-2] == 'B' && st[m-1] == 'A') {
                    // pop 3, push 'A'
                    st.resize(m-3);
                    st.push_back('A');
                    reduced = true;
                    continue;
                }
            }
            // 2) n?u cho phép, BA -> A (An có phép này)
            if (allowBA && m >= 2) {
                if (st[m-2] == 'B' && st[m-1] == 'A') {
                    st.resize(m-2);
                    st.push_back('A');
                    reduced = true;
                    continue;
                }
            }
            // 3) AB -> A nhýng ch? khi không có kh? nãng ABA v?i k? t? ti?p theo
            if (m >= 2) {
                if (st[m-2] == 'A' && st[m-1] == 'B') {
                    // xem k? t? ti?p theo trong input (n?u có)
                    if (i + 1 >= n || s[i+1] != 'A') {
                        st.resize(m-2);
                        st.push_back('A');
                        reduced = true;
                        continue;
                    }
                    // n?u s[i+1] == 'A' th? ho?n (có th? thành ABA)
                }
            }
        } while (reduced);
    }

    // sau khi x? l? toàn b?, có th? v?n c?n các chu?i con ð? gi?m (ví d? cu?i chu?i)
    // nhýng do ta ho?n AB n?u s[i+1]=='A', gi? không c?n k? t? ti?p theo nên c?n ch?y v?ng gi?m l?n cu?i.
    bool again = true;
    while (again) {
        again = false;
        int m = (int)st.size();
        if (m >= 3) {
            if (st[m-3]=='A' && st[m-2]=='B' && st[m-1]=='A') {
                st.resize(m-3);
                st.push_back('A');
                again = true;
                continue;
            }
        }
        if (allowBA && m >= 2) {
            if (st[m-2]=='B' && st[m-1]=='A') {
                st.resize(m-2);
                st.push_back('A');
                again = true;
                continue;
            }
        }
        if (m >= 2) {
            if (st[m-2]=='A' && st[m-1]=='B') {
                st.resize(m-2);
                st.push_back('A');
                again = true;
                continue;
            }
        }
    }

    return (st.size() == 1 && st[0] == 'A');
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        string s;
        cin >> s;
        bool an = canGenerate(s, true);   // An có BA
        bool binh = canGenerate(s, false); // Binh không có BA
        cout << (an ? "YES" : "NO") << " " << (binh ? "YES" : "NO") << "\n";
    }
    return 0;
}


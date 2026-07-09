#include <iostream>
#include <vector>
#include <set>       // Dùng set ð? lýu các ch? s? c?n l?i
#include <algorithm> // Dùng cho sort
#include <map>       // Không c?n, dùng vector<pair> hi?u qu? hõn

using namespace std;

int solve() {
    int n;
    cin >> n;
    
    // M?ng `a` ð? lýu giá tr? g?c, truy c?p b?ng ch? s?
    vector<int> a(n);
    
    // `ord` (order) là danh sách `pair<giá tr?, ch? s?>`
    // Dùng ð? t?m ph?n t? nh? nh?t c?n xóa (cho Phép toán 1)
    vector<pair<int, int>> ord(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        ord[i] = {a[i], i};
    }

    // S?p x?p `ord` theo giá tr? (giá tr? nh? nh?t lên trý?c)
    // O(N log N)
    sort(ord.begin(), ord.end());

    // `s` là m?t set (t?p h?p) ð? s?p x?p
    // lýu các *ch? s?* c?a các ph?n t? v?n c?n trong m?ng
    set<int> s;
    for (int i = 0; i < n; ++i) {
        s.insert(i);
    }

    int cost = 0;
    int ord_ptr = 0; // Con tr? cho m?ng `ord` (th? t? xóa t?i thi?u)

    // L?p cho ð?n khi set các ch? s? b? r?ng
    while (!s.empty()) {
        
        // 1. Ýu tiên Phép toán 2 (Xóa c?p)
        bool removed_pair = false;
        
        // Liên t?c xóa các c?p b?ng nhau ? ð?u set
        while (s.size() >= 2) {
            int idx1 = *s.begin();         // L?y ch? s? ð?u tiên
            int idx2 = *next(s.begin()); // L?y ch? s? th? hai
            
            if (a[idx1] == a[idx2]) {
                // N?u giá tr? b?ng nhau, th?c hi?n Op 2
                s.erase(idx1);
                s.erase(idx2);
                cost++;
                removed_pair = true; // Ðánh d?u là ð? xóa 1 c?p
            } else {
                // N?u c?p ð?u không b?ng nhau, không th? làm Op 2
                break; 
            }
        }

        // 2. B?t bu?c th?c hi?n Phép toán 1
        
        // N?u chúng ta *không* xóa ðý?c c?p nào ? trên
        // VÀ set v?n chýa r?ng, chúng ta *bu?c* ph?i xóa 1 ph?n t?
        if (!removed_pair && !s.empty()) {
            
            // T?m ph?n t? nh? nh?t *hi?n có* ð? xóa
            // b?ng cách duy?t m?ng `ord` ð? s?p x?p
            while (ord_ptr < n) {
                int index_to_remove = ord[ord_ptr].second;
                ord_ptr++; // Di chuy?n con tr?

                // Ki?m tra xem ch? s? này có c?n trong set không
                auto it = s.find(index_to_remove);
                if (it != s.end()) {
                    // N?u c?n, ðây chính là ph?n t? nh? nh?t
                    // hi?n có. Xóa nó.
                    s.erase(it);
                    cost++;
                    break; // Ð? xong Op 1, quay l?i v?ng l?p chính
                }
                // N?u không, ti?p t?c t?m (ph?n t? này ð? b? xóa)
            }
        }
    }

    return cost;
}

int main() {
    // Tãng t?c I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}

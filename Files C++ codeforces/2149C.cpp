#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;   // Ð?c s? test case. N?u không ð?c ðý?c th? thoát.

    while(T--){                 // L?p qua t?ng test case
        int n, k;
        cin >> n >> k;          // Ð?c n (ð? dài m?ng), k (MEX mong mu?n)

        // freq[x] = s? l?n xu?t hi?n c?a giá tr? x trong m?ng
        // Dùng kích thý?c n+1 v? theo ð?: 0 <= ai <= n
        vector<int> freq(n+1, 0);

        for(int i = 0; i < n; ++i){
            int x; cin >> x;
            if (0 <= x && x <= n) freq[x]++; 
            // N?u giá tr? trong m?ng n?m trong [0..n], tãng ð?m t?n su?t
        }

        // B1: Tính missing = s? lý?ng s? t? 0..k-1 b? thi?u
        int missing = 0;
        for(int x = 0; x < k; ++x) {
            if(freq[x] == 0) ++missing;
        }

        // B2: Ð?m s? l?n xu?t hi?n c?a k trong m?ng
        int cntk = (k <= n ? freq[k] : 0);

        // B3: K?t qu? = max(missing, cntk)
        cout << max(missing, cntk) << '\n';
    }
    return 0;
}


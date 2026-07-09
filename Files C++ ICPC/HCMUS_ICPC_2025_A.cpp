#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        ll C, D;
        cin >> n >> C >> D;
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        ll Amax = *max_element(a.begin(), a.end());
        ll Amin = *min_element(a.begin(), a.end());
        ll Bmax = *max_element(b.begin(), b.end());
        ll Bmin = *min_element(b.begin(), b.end());

        // N?u ð? th?a ði?u ki?n
        if (Amax - Amin <= C && Bmax - Bmin <= D) {
            cout << 0 << "\n";
            continue;
        }

        ll need = 0;
        bool ok = false;

        // T?m s? l?n tãng t?i thi?u c?n thi?t
        for (int i = 0; i < n; ++i) {
            ll incA = max(0LL, Amax - C - a[i]);
            ll incB = max(0LL, Bmax - D - b[i]);
            ll req = max(incA, incB);
            need = max(need, req);
        }

        // Ki?m tra l?i sau khi tãng "need" l?n
        vector<ll> newA = a, newB = b;
        for (int i = 0; i < n; ++i) {
            newA[i] += need;
            newB[i] += need;
        }

        ll newAmax = *max_element(newA.begin(), newA.end());
        ll newAmin = *min_element(newA.begin(), newA.end());
        ll newBmax = *max_element(newB.begin(), newB.end());
        ll newBmin = *min_element(newB.begin(), newB.end());

        if (newAmax - newAmin <= C && newBmax - newBmin <= D)
            cout << need << "\n";
        else
            cout << -1 << "\n";
    }
    return 0;
}


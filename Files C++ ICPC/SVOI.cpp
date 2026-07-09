#include <bits/stdc++.h>
using namespace std;

struct BaiTap {
    int a, b, c, d;
    bool done = false;
};

int main() {

    int n, T, P;
    cin >> n >> T >> P;
    vector<BaiTap> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i].a >> v[i].b >> v[i].c >> v[i].d;
    }

    int solved = 0;
    bool progress = true;
    while (progress) {
        progress = false;
        for (int i = 0; i < n; i++) {
            if (!v[i].done && T >= v[i].a && P >= v[i].b) {
                T += v[i].c;
                P += v[i].d;
                v[i].done = true;
                solved++;
                progress = true;
            }
        }
    }

    cout << solved;
}


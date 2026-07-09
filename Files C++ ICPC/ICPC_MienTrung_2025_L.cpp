#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    double v;
    cin >> n >> m >> v;

    vector<vector<pair<int,int> > > a(n+1);
    vector<int> goc(n+1, 0);

    for (int i = 0; i < m; i++) {
        int x, y, l;
        cin >> x >> y >> l;
        a[x].push_back({y, l});
        a[y].push_back({x, l});
        goc[x]++; goc[y]++;
    }

    int s, t;
    cin >> s >> t;

    const double MAX = 1e18;
    vector<double> kc(n+1, MAX);
    kc[s] = 0.0;

    priority_queue<pair<double,int>, vector<pair<double,int> >, greater<pair<double,int> > > pq;
    pq.push({0.0, s});

    while (pq.empty() == false) {
        auto top = pq.top();pq.pop();
        
        double du = top.first;
        int u = top.second;

        if (du > kc[u]) continue;
        if (u == t) break;

        for (auto &canh : a[u]) {
            int dinh = canh.first;
            double dai = canh.second;

            double cost = dai / v;
            if (dinh != s && dinh != t) {
                cost += max(0, goc[dinh] - 2);
            }

            if (kc[dinh] > kc[u] + cost) {
                kc[dinh] = kc[u] + cost;
                pq.push({kc[dinh], dinh});
            }
        }
    }

    cout << fixed << setprecision(6) << kc[t] << "\n";
    return 0;
}


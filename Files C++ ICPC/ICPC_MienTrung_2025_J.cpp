#include <bits/stdc++.h>
using namespace std;

struct diem {
    int r, c, hp, d;
};

int main() {

    int R, C;
    cin >> R >> C;
    vector<string> a(R);
    int sr, sc, dr, dc;
    for (int i = 0; i < R; i++) {
        cin >> a[i];
        for (int j = 0; j < C; j++) {
            if (a[i][j] == 'S') sr = i, sc = j;
            if (a[i][j] == 'D') dr = i, dc = j;
        }
    }

    bool vis[105][105][4] ={0};

    queue<diem> q;
    q.push({sr, sc, 3, 0});
    vis[sr][sc][3] = true;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, 1, -1};

    while (!q.empty()) {
        diem cur = q.front(); q.pop();

        if (cur.r == dr && cur.c == dc) {
            cout << cur.d;
            return 0;
        }

        for (int k = 0; k < 4; k++) {
            int nr = cur.r + dx[k], nc = cur.c + dy[k];
            if (nr < 0 || nr >= R || nc < 0 || nc >= C) continue;

            int nhp = cur.hp;
            if (a[nr][nc] == '+') {
                if (cur.hp == 1) continue; 
                nhp = cur.hp - 1;
            }

            if (!vis[nr][nc][nhp]) {
                vis[nr][nc][nhp] = true;
                q.push({nr, nc, nhp, cur.d + 1});
            }
        }
    }

    cout << -1;
    return 0;
}


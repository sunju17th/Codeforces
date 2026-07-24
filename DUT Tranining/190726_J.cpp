// 2024-2025 ICPC Latin American Regional Programming Contest - Problem J

#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<pair<int, double>> road;

    int n;
    double alpha;
    cin >> alpha >> n;

    double rad = acos(-1.0)*alpha/180, tanA = tan(rad);

    for(int i=0; i<n;i++)
    {
        int x;
        double y;

        cin >> x >> y;
        double l = y / tanA;
        road.push_back({x, x+l});
    }

    sort(road.begin(), road.end());

    double cur_start = road[0].first , cur_end = road[0].second, ans = 0;

    for(int i=1;i<n;i++)
    {
        if(road[i].first >= cur_start && road[i].first <= cur_end)
        {
            if(road[i].second > cur_end) cur_end = road[i].second;
        }
        else
        {
            ans += cur_end - cur_start;
            cur_end = road[i].second;
            cur_start = road[i].first;
        }
    }

    ans += cur_end - cur_start;

    cout << fixed << setprecision(6) << ans << "\n";
}
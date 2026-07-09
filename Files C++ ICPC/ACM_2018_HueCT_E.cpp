#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    vector<long long> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    stack<pair<long long, long long> > st; // (chi?u cao, cnt_i)
    long long S = 0;

    // duy?t t? ph?i sang trái
    for (int i = n - 1; i >= 0; i--) {
        long long cao = h[i];
        long long cnt_i = 0;

        // pop nh?ng cây th?p hõn
        while (!st.empty() && st.top().first < cao) {
            pair<long long,long long> top = st.top();
            st.pop();
            cnt_i += top.second + 1;
        }

        st.push(make_pair(cao, cnt_i));
        S += cnt_i;
    }

    cout << S << "\n";
    return 0;
}


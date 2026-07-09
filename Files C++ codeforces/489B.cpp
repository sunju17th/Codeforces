#include<bits/stdc++.h>

using namespace std;

long long a[101], b[101];

int main()
{
    int n, m;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];

    cin >> m;
    for(int i=0;i<m;i++)
        cin >> b[i];

    sort(a, a+n);
    sort(b, b+m);

    int x=0, y=0, ans=0;

    while(x<n && y<m)
    {
        if(abs(a[x] - b[y]) <= 1) {
            x++;
            ans++;
            y++;
        } else {
            if(a[x] < b[y]) x++;
            else y++;
        }
    }

    cout << ans;
}
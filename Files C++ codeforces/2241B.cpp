#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long x, y;
        cin >> x;
        int cnt = 0;
        while(x!=0)
        {
            x/=10;
            cnt++;
        }

        cout << "1";
        for(int i=1;i<cnt;i++) cout << "0";
        cout << "1" << endl;
    }
}
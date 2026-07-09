#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string s;
        int one=0, zero=0;
        cin >> n;
        cin >> s;
        for(int i=0;i<n;i++)
        {
            if(s[i] == '0') zero++;
            if(s[i] == '1') one++;
        }

        if(zero%2!=0 && one%2!=0) cout << "2" << endl;
        else cout << "1" << endl;
    }
}
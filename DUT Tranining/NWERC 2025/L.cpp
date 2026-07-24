// 2025 ICPC Northwestern European Regional Programming Contest (NWERC 2025) - Problem L

#include<bits/stdc++.h>

using namespace std;

map <string, vector<int>> mp;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int rank=1;rank<=10;rank++)
        {
            string name;
            cin >> name;

            if(mp[name].empty())
                mp[name].assign(11, 0); // khoi tao vector co 11 phan tu 0

            mp[name][0]++;
            mp[name][rank]++;
        }
    }


    string ans = "";
    vector<int> best_scores(11, -1);
    bool is_tie = false;

    for(auto [artist, scores] : mp)
    {
        if(scores > best_scores) 
        {
            best_scores = scores;
            is_tie = false;
            ans = artist;
        }
        else if(scores == best_scores) 
        {
            is_tie = true;
        }
    }

    if(is_tie) cout << "tie";
    else cout << ans;
}


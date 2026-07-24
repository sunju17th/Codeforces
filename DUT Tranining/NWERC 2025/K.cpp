// 2025 ICPC Northwestern European Regional Programming Contest (NWERC 2025) - Problem K

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int h, w, k, i, t;
    cin >> h >> w >> k >> i >> t;

    cout << "KIT";
    k--;
    t--;
    i--;

    for(int m=0;m<h;m++)
    {
        for(int n=0;n<w;n++)
        {
            if(t>0) 
            {
                cout << "T";
                t--;
            }
            else if(k>0)
            {
                cout << "K";
                k--;
            }
            else if(i>0)
            {
                cout << "I";
                i--;
            }
        }
        cout << endl;
    }
}
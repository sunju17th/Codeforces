#include<iostream>
#include<map>

using namespace std;

map<long long ,int> mp;

int main()
{
    long n, s=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        long long a;
        cin >> a;
        if(mp.count(a) == 0)
            mp[a]=1;
        else mp[a]++;
    }
    
    // dùng iterator thay auto
    for (map<long long,int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        int p = it->second;   // l?y value
        if (p <= 5) {
            s += 100;
        } else {
            s += 100 + (p - 5);
        }
    }
    
    cout << s;
}

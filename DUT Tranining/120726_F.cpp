// 2025-2026 ICPC NERC, Kyrgyzstan Regional Contest - Problem F

#include<bits/stdc++.h>

using namespace std;

const long long N = 300005; // 3*10^5
long long n, d;
long long events[N]={0};
vector<long long> posi, nega;

int tim(long long k, int tar)
{
    int l = 0, r = nega.size();
    while(r>=l)
    {
        int mid = (r-l)/2;
        if(abs(nega[mid] - posi[tar]) > 0 && abs(nega[mid] - posi[tar]) <= k)
            return mid; 
        if(abs(nega[mid] - posi[tar]) )

    }


}

int main()
{
    cin >> n >> d;
    for(int i=0;i<n;i++) 
        cin >> events[i];

    
}
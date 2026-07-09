#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k , minre=0, maxre=0; cin >> k >> n ;
    for (long long i=0;i<n;i++) 
    {
    	long long x;
    	cin >> x;
		minre = max(minre, min(x, k - x));
        maxre = max(maxre, max(x, k - x));
	}
	cout << minre <<" "<<maxre;
}

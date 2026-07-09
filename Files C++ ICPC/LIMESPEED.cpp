#include <bits/stdc++.h>
using namespace std;

int aMax[1000006]={0}, aMin[1000006]={0}; 


bool kt(long x,long y)
{
	if(x<0 && y<0) return  true;
	else if(x>0 && y>0) return true;
	else return false;
}


int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> b(k), a(n);

    for (int i = 0; i < k; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> a[i];
	
	
	int maxb =  0, minb = 0;
    for (int i = 1; i < k; i++)
    {
    	if(a[maxb] < a[i]) maxb = i;
    	if(a[minb] > a[i]) minb = i;
	}
	
	cout << maxb <<" "<< minb << endl;
    
    deque <long long> dqMax, dqMin;

	while (dqMax.size()) dqMax.pop_front();
	while (dqMin.size()) dqMin.pop_front();
	
	for (int i = 0; i < n; ++i) {
	    while (dqMin.size() && a[dqMin.back()] >= a[i]) dqMin.pop_back();
	    dqMin.push_back(i);
	    if (dqMin.front() + k <= i) dqMin.pop_front();
	    if (i >= k-1) aMin[i] = dqMin.front();
	}
	
	for (int i = 0; i < n; ++i) {
	    while (dqMax.size() && a[dqMax.back()] <= a[i]) dqMax.pop_back();
	    dqMax.push_back(i);
	    if (dqMax.front() + k <= i) dqMax.pop_front();
	    if (i >= k-1) aMax[i] = dqMax.front();
	}
	int ans = 0;
	
	
	for(int i=k-1;i<n;i++)
	{
		cout << aMax[i];
	}
	
	for(int i=k-1;i<n;i++)
	{
		if(kt(a[i-k+1] - a[i], b[0] - b[k-1]) && aMax[i]-i == maxb && minb == aMin[i]-i) ans++;
		cout << i-k+1 <<" "<<i<<" "<<kt(a[i-k+1] - a[i], b[0] - b[k-1])<<" "<< aMax[i]-i << " "<<aMin[i]-i<<" "<<ans<<endl;
 	}
    cout << ans;
}


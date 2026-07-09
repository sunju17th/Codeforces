#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<long long> a;

long long binary_search(long long n, long long target, long long k) {
    long lo = 0, hi = n-1, result = -1, min=1e9+7;
    while (lo <= hi) {
        int mid = lo + (hi - lo)/2;
        if (a[mid] == target-k)
            return mid;       	
        else 
        {
        	if (a[mid] < target-k)
        	{	
        		if(target-a[mid]<min)
        		{
        			min=target-a[mid];
        			result = mid;
				}
				lo = mid+1;
			}
			else
				hi = mid-1;
		}
    }
    return result;
}   

int main()
{
	long long n, k, s=0;
	cin >> n >> k;
	for(int i=0;i<n;i++)
	{
		long long x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(),a.end());
	for(long i=0;i<a.size();i++)
	{
		long long result = 0;
		while(result!=-1)
		{
			result = binary_search(a.size(),a[i],k);
			if(result!=-1) a.erase(a.begin()+result);
			
		}
	}
	for(long i=0;i<a.size();i++)
	{
		s=s+a[i];
	}
	cout << s;
	return 0;
} 

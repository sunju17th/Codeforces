#include<iostream>
#include<vector>

using namespace std;

vector <long long> n3s;

long mod = 1e9+7;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		long long n, k;
		cin >> n >> k;
		long long res =    ((((n-1)%k + ((n-1)%k)/2)%k) *  ((n+1)%k+((n-1)%k)/2)%k)%k;
		cout << res << endl;
	}
	
	return 0;
}

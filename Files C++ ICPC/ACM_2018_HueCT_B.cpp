#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	float ans = sqrt(n) - 1;
	cout << setprecision(2) << fixed << ans;
}



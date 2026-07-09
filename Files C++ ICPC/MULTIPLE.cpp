#include<iostream>
#include<math.h>

using namespace std;
long long a, n;
 
int main()
{
	cin >> n >> a;
	long long s;
	s=pow(a,n); 
	s=((s%2023-1)%2023/((a-1)%2023))%2023;
	cout << s;
}



#include<iostream>

using namespace std;

int main()
{
	int t, sum=0;
	cin >> t;
	while(t--)
	{
		int a, b, c, s=0;
		cin >> a >> b >> c;
		if(a==1) s++;
		if(b==1) s++;
		if(c==1) s++;
		if(s>=2) sum++;
	}
	
	cout << sum;
}



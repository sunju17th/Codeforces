#include<iostream>

using namespace std;

int main()
{
	int n;
	bool kt = true;
	cin >> n;
	while (n!=0)
	{
		int t=n%10;
		n/=10;
		
		if(t!=4 && t!=7)
		{
			kt=false;
			break;
		}
	}
	if(kt==true) cout << "YES";
	else cout << "NO";
}



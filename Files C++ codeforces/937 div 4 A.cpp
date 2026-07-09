#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a<b && b<c) cout << "STAIR" <<endl;
		else
		if(a<b && b>c) cout <<"PEAK" << endl;
		else cout << "NONE" << endl;
	}
}



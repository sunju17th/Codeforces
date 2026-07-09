#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	if(t<=360) cout << "0";
	else if(t<=390) cout << t - 360;
 	else if(t<=570) cout << "30";
 	else if(t<=585) cout << t - 570 + 30;
	else if(t<=645) cout << "45";
	else cout << t - 600;  
}



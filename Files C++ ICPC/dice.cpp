#include<iostream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin >> n;
		switch(n)
		{
		case 1:
			cout << "6"<<endl;
			break;
		case 2:
			cout << "5"<<endl;
			break;
		case 3:
			cout <<"4"<<endl;
			break;
		case 4:
			cout <<"3"<<endl;
			break;
		case 5:
			cout <<"2"<<endl;
			break;
		case 6:
			cout <<"1"<<endl;
			break;
		}
	
	}
	return 0;
}

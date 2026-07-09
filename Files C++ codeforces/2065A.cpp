#include<iostream>
#include<string>

using namespace std;

string name;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin >> name;
		for(int i=0;i<name.size()-2;i++)
		{
			cout <<name[i];
		}
		cout << "i" <<endl;
	}
}



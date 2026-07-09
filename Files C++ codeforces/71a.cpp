#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string name;
		cin >> name;
		if(name.length()>10){
			cout << name.front() << name.length()-2 <<name.back()<<endl;
		}else
		{
			cout << name<<endl;
		}
	}
}



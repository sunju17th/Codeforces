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
		bool kt = false;
		for(int i=0;i<name.size()-1;i++)
		{
			if(name[i]==name[i+1]) 
			{
				cout << "1" <<endl;
				kt = true;
			}
		}
		if(kt==false) cout << name.size() << endl;
	}
}



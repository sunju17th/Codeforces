#include<iostream>
#include<string>

using namespace std;

int a[30]={0};

int main()
{
	string name;
	cin >> name;
	string ex = "hello";
	int j=0;
	for(int i=0;i<name.size();i++)
	{
		if(name[i] == ex[j])
		{
			j++;
		}
	}
	if(j==5) cout << "YES";
	else cout << "NO";
 	
}



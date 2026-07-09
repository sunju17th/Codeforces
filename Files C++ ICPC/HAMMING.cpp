#include<iostream>
#include<string>

using namespace std;

int main() 
{
	string name1, name2;
	getline(cin,name1);
	getline(cin,name2);
	
	long s=0;
	
	long d=name2.size()-name1.size();
	
	for(long i=0;i<d;i++)
	{
		name1="0"+name1;
	}
	
	for(long i=0;i<name2.size();i++)
	{
		if(name1[i]!=name2[i])
			s++;
	}
	
	cout << s;
}

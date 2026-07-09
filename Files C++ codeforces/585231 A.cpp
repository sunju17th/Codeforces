#include<iostream>
#include<string>

using namespace std;


int main()
{
	int t=3, a=0, b=0, c=0;
	while(t--)
	{
		string name;
		cin >> name;
		if(name[1]=='>')
		{
			if(name[0]=='A') a++;
			if(name[0]=='B') b++;
			if(name[0]=='C') c++;
		}
		else
		{
			if(name[2]=='A') a++;
			if(name[2]=='B') b++;
			if(name[2]=='C') c++;
		}
	}
	if(a==b||a==c||b==c)
	{
		cout << "Impossible";
		return 0;
	 } 
	
	if(a==0) cout << 'A';
	if(b==0) cout << 'B';
	if(c==0) cout << 'C';
	
	if(a==1) cout << 'A';
	if(b==1) cout << 'B';
	if(c==1) cout << 'C';
	
	if(a==2) cout << 'A';
	if(b==2) cout << 'B';
	if(c==2) cout << 'C';
	
}



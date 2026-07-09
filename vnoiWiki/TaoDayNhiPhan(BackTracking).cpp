#include<iostream>
#include<string>

using namespace std;

string t;
int n;

void TaoDayNhiPhan(int pos)
{
	if(pos > n)
	{
		cout << t <<  endl;
		return;
	}
	
	for(char i='0'; i<='1';i++)
	{
		t.push_back(i);
		TaoDayNhiPhan(pos+1);
		t.pop_back();
	}
}

int main()
{
	cin >> n;
	TaoDayNhiPhan(1);
}



#include<iostream>

using namespace std;

int n;
int k; 
string a;

void TaoDaySoNguyen(int pos, int used)
{
	if(pos > n)
	{
		cout << a << endl;
		return;
	}
	
	if(used <= k)
	{
		a.push_back(used);
		used++;
		pos++;
		TaoDaySoNguyen(pos, used);
		a.pop_back();
	}
}

int main()
{
	cin >> n >> k;
	TaoDaySoNguyen(1,1);
}



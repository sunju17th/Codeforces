#include<iostream>
#include<vector>

using namespace std;

vector <int> day;

int n, k;

void inDay()
{
	for(int i=0;i<day.size();i++)
		cout << day[i];
	cout << endl;
}

void taoDay(int pos)
{
	if(pos > k){
		inDay();
		return;
	}
	
	int lastNum;
	if(day.empty()) lastNum=0;
	else lastNum = day.back();
	
	for(int i=lastNum + 1;i<=n;i++)
	{
		day.push_back(i);
		taoDay(pos+1);
		day.pop_back();
	}
}

int main()
{
	cin >> n >> k;
	taoDay(1);
}



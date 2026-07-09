#include<iostream>
#include<string>

using namespace std;

string num1, num2;

int cmpBignum(string num1, string num2)
{
	while(num1.size()>num2.size()) num2 = '0' + num2;
	while(num2.size()>num1.size()) num1 = '0' + num1;
	if(num1 > num2) return 1;
	else if(num1 < num2) return -1;
	else return 0;
}

int main()
{
	cin >> num1 >> num2;
	cout << cmpBignum(num1, num2);
}



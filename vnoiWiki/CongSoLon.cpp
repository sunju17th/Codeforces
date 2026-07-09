#include<iostream>
#include<string>

using namespace std;

string num1, num2;

string sumBignum(string num1, string num2)
{
	string ans ;
	int carry = 0;
	while(num1.size()>num2.size()) num2 = '0' + num2;
	while(num2.size()>num1.size()) num1 = '0' + num1;
	
	for(int i=num1.size()-1;i>=0;i--)
	{
		int x = num1[i] - '0';
		int y = num2[i] - '0';
		
		int c = x + y  + carry;
		carry = c/10;
		ans = char(c%10 + '0') + ans;
	}
	
	if(carry > 0) ans = '1'+ans;
	return ans;
	
}

int main()
{
	cin >> num1 >> num2 ;
	cout << sumBignum(num1, num2);
}



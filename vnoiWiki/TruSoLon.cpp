#include<iostream>

using namespace std;


int cmpBignum(string num1, string num2)
{
	while(num1.size()>num2.size()) num2 = '0' + num2;
	while(num2.size()>num1.size()) num1 = '0' + num1;
	if(num1 > num2) return 1;
	else if(num1 < num2) return -1;
	else return 0;
}

string minusBignum(string num1, string num2)
{
	if(cmpBignum(num1, num2) == -1) return "-" + minusBignum(num2,num1);
	else if(cmpBignum(num1, num2) == 0) return "0";
	
	while(num1.size() > num2.size()) num2 = '0' + num2;
	
	string ans;
	int borrow = 0;
	int c;
	for(int i=num1.size()-1;i>=0;i--)
	{
		int x = num1[i] - '0';
		int y = num2[i] - '0';
		c = x - y - borrow;
		
		borrow = 0;
		if(c<0)
		{
			borrow = 1;
			c+=10;
		}
		else borrow = 0;
		ans=char(c+'0')+ans;
	}
	
	while(ans.size()>1 && ans[0] == '0')
		ans.erase(0,1);
		
	return ans;
}

int main()
{	
	string num1, num2;
	cin >> num1 >> num2 ;
	cout << minusBignum(num1, num2);
}



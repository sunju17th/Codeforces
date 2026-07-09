#include<bits/stdc++.h>

using namespace std;

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


bool kt(string n)
{
	bool ans = true;
	long l = 0, r = n.size()-1;
	
	while(l<=r)
	{
		if(n[l] != n[r]) return false;
		else{
			l++;r--;
		}
	}
	return true;
 } 

int main()
{
	string t;
	cin >> t;
	int n, m;
	cin >> n >> m;
	
	if(kt(t) == true) cout << "NO" <<endl << "0" <<" "<<t;
	else
	{
		int i;
		bool ans = true; 
		for( i=0;i<n;i++)
		{
			if(t.size()>=m) 
			{
				ans = true;
				break;
			}
			else {
				string temp = t;
				reverse(t.begin(), t.end());
				t = sumBignum(t, temp);
				if(kt(t))
				{
					ans = false;
					break;
				}
			}
		}
		
		if(ans==true) cout << "YES" << endl;
		else  cout << "NO" << endl;
		cout << i+1 <<" "<<t;
	}
}



#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a;
	cin >> a;
	
	int l=0, r=a.size()-1;
	bool ans = true;
	if(a[l] == '4' && a[r] == '9' && a.size() %2 ==0)
	{
		l++;r--;
		while(l<r)
		{
			if(a[l] == '4' && a[r]=='8')
			{
				l++;
				r--;
			}
			else 
			{
				ans = false;
				break;
			}
		}
	}
	else ans = false;
	if(ans) cout << "Yes";
	else cout << "No";
}



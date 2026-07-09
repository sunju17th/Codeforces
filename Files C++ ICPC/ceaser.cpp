#include<iostream>
#include<string>
 
using namespace std;

int main()
{
	string name, ans;
	getline(cin, name);
	int k;
	cin >> k;
	
	ans = name;
	for(int i=0;i<name.size();i++)
	{
		if(ans[i] == ' ') continue;
		if(isupper(ans[i])){
			ans[i] += k;
			if(ans[i]>'Z') ans[i] = ans[i] - 26;
		}
		else
		{
			ans[i] += k;
			if(ans[i]>'z') ans[i] = ans[i] - 26;
		}
		
	}
	
	cout << ans;
}



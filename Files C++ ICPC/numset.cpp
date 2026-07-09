#include<bits/stdc++.h>

using namespace std;

set <string> s;

string normalize(string n)
{
	if(n[0] == '0'&&n.size()!=1)
	{
		n.erase(0);
		return normalize(n);
	}
	else return n;
}

int sum(string n)
{
	int ans=0;
	for(int i=0;i<n.size();i++)
	{
		ans+=n[i] - '0';
	}
	return ans;
}

int main()
{
	string n;
	cin >> n;
	
	for(int i=0;i<n.size();i++)
	{
		for(int j=i;j<n.size();j++)
		{
			string t;
			if(i>0) 
				for(int m=0;m<i;m++)
				{
					t.push_back(n[m]);
				}
			if(j<n.size())
				for(int m=j+1;m<n.size(); m++)
				{
					t.push_back(n[m]);
				}
			
			s.insert(normalize(t));
		}
	}
	
	s.insert(normalize(n));
	int ans=0;
	for (set<string>::iterator it = s.begin(); it != s.end(); ++it)
	{
		if(sum(*it)%3==0&&*it!="") ans++;
	}
	cout << ans;
	
}



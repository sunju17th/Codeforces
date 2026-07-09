#include<iostream>
#include<string.h>


using namespace std;

bool kt(string name)
{
	int j, k;
	if(name=="")
		return false;
	if(name.size()==1)
		return true;
	for(j=0,k=name.size()-1;j<k;j++,k--)
	{
		if(name[j]!=name[k])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	string name,s="";
	for(int i=1;i<=n;i++)
	{
		cin >> name;
		if(kt(name)==true)
			s=s+'1';
		else
			s=s+'0';
	}
	for(int i=0;i<s.size();i++)
	{
		cout << s[i] << endl;
	}
	return 0;
}

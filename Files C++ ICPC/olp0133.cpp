#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector <string> a; 
vector <string> b; 

int kt(string a, string b)
{
	int j=0; 
	for(int i=0;i<a.size();i++)
	{
		if(a[i]==b[j])
		{
			j++;
		}
		else j=0;
		if(j==b.size()-1)
			return i;
	}
	return -1;	
}

int main()
{
	for(int i=0;i<1e5+7;i++)
	{
		string name;
		getline(cin,name);
		if(name.empty())
			break;
		a.push_back(name);
	}
	for(int i=0;i<1e5+7;i++)
	{
		string name;
		getline(cin,name);
		if(name.empty())
			break;
		b.push_back(name);
	}
	for(int i=0;i<b.size();i++)
	{
		bool r=false;
		for(int j=0;j<a.size();j++)
		{
			if(kt(a[j],b[i])!=-1)
			{
				r=true;
				a[j].erase(a[j].begin()+kt(a[j],b[i])-b[i].size()+1,a[j].begin()+kt(a[j],b[i])+2);
				cout << a[j] << endl;
			}
		}
		if(r==false)
		{
			cout << "eh" << endl;
		}
	}
}

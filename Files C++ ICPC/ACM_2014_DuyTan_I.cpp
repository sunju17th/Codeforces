#include<bits/stdc++.h>

using namespace std;

vector <string> head, tail, body, remain;

void coutS(vector <string> a)
{
	for(int i=0;i<a.size();i++)
		cout << a[i] <<" ";
	cout << endl;
}

string cmp(string num1, string num2)
{
	while(num1.size()>num2.size()) num2 = '0' + num2;
	while(num2.size()>num1.size()) num1 = '0' + num1;
	if(num1 > num2) return num1;
	else if(num1 < num2) return num2;
	else return num1;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string x;
		cin >> x;
		if(x[0]=='#') head.push_back(x);
		else if(x[x.size()-1]=='#') tail.push_back(x);
		else if(x[1]=='#') remain.push_back(x);
		else body.push_back(x);
	}
	
	coutS(head);
	coutS(tail);
	coutS(body);
	coutS(remain);
	
	for(int i=0;i<head.size();i++)
	{
		while(head[i][0]=='#')
			if(head[i][0]== '#') head[i].erase(head[i].begin());
	}
	
	for(int i=0;i<tail.size();i++)
	{
		while(tail[i][tail.size()-1] == '#')
			if(tail[i][tail.size()-1] == '#') tail[i].erase(tail[i].end());
	}
	
	string maxhead = head[0];
	for(int i=0;i<head.size();i++)
	{
		maxhead = cmp(maxhead, head[i]);
	}
	string maxtail = tail[0];
	for(int i=0;i<tail.size();i++)
	{
		maxtail = cmp(maxtail, tail[i]);
	}
	
	coutS(head);
	coutS(tail);
	coutS(body);
	coutS(remain);
}



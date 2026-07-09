#include<bits/stdc++.h>
#include<set>



using namespace std;

int main()
{
	set<long> st;
	int n, x;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x;
		st.insert(x);
	}
	if(st.find(5) != st.end())
	{
		cout << "found";
	}
	else
	{
		cout << "notfound";
	}
	for(set<long>::iterator it = st.begin(); it != st.end(); it++)
	{
		cout << *it << " ";
	}
	if(st.count(5) != 0)
	{
		cout << st.count(5) << endl;
	}
	else
	{
		cout << "notfound" << endl;
	}
}

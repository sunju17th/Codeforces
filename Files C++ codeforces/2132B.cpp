#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		vector <long long> a;
		long long n;
		cin >> n;
		for(long long i=10;i<=1e18;i=i*10)
		{
			long long m=i+1;
			if(n%m==0) a.push_back(n/m);
		}
		
		
		if(a.size()==0) cout << "0" << endl;
		else 
		{	
			sort(a.begin(),a.end());
			cout << a.size() << endl;
			for(int i=0;i<a.size();i++)
				cout << a[i] << " ";
			cout << endl;
		}
	}
}



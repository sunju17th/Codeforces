#include<iostream>

using namespace std;

int main()
{
	long t;
	cin >> t;
	while(t--)
	{
		long n, a=0, b=0, tong=0;
		cin >> n;
		for(long i=0;i<n;i++)
		{
			int x;
			cin >> x;
			if(x==-1) a++;
			if(x==0) b++; 
		}
		
		if(a%2!=0) tong+=2;
		tong+=b;
		cout << tong << endl;
	 } 
}



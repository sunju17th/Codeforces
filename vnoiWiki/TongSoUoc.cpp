#include<iostream>

using namespace std;

int pr[100005];

long tongSoUoc(long n) 
{
	int tong = 1;
	
	if(n==1) return 1;
	else
	{	
		int temp=0;
		int i=2;
		while(n!=1)
		{
			if(n%i==0)
			{
				temp++;
				n/=i;
			}
			else
			{
				tong=tong*(temp+1);
				i++;
				temp=0;
				cout << tong << " ";
			}
		}
		return tong*(temp+1);
	}
}

int main()
{
	int n;
	cin >> n;
	
	cout << tongSoUoc(n);
}



#include<iostream>
#include<iomanip>

using namespace std;

float a[5001]; 

int main()
{
	int n;
	long tong=0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
 		tong+=a[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]<a[j]) swap(a[i], a[j]);
		}
	}
	
	float tv, tb;
	tb = (float)tong / (float)n;
	if(n%2==1) tv = (float) a[n/2];
	else 
	{
		tv = ( a[n/2] + a[(n/2 - 1)] ) / 2;
	}
	
	cout << setprecision(6) << fixed << tb << endl  << tv;
 	
}



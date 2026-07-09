#include<iostream>

using namespace std;

long long a[100001]; 

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n;
		long long sum1=-1e18;
		long long sum2=-1e18;
		long long temp=0;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
			if(i==0) sum2=a[0];
			else 
			{
				temp=max(a[i],temp+a[i]); 
				sum2=max(sum2,temp);
			}
			
		}
		
		
		for(int i=0;i<n;i++)
		{
			temp+=a[i];
			sum1=max(sum1,temp);
			if(temp<0) temp=0;
		}
		
		cout << sum2 <<" "<< sum1 <<endl;  
	}
	
}



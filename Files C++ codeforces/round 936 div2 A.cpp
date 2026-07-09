#include<iostream>
#include<algorithm>

using namespace std;

long a[100005] ;

int main()
{
	int t;
	cin >> t;
	for(int q=0;q<t;q++)
	{
		int n, s=1;
		cin >> n;
		for(int i=0;i<n;i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);
		
	/*	for(int i=0;i<n;i++)
		{
			cout << a[i];
		}
		*/
		int i=n/2;
		if(n%2==0) i=i-1;
		for(i;i<n-1;i++)
		{
			if(a[i]==a[i+1])
			{
				s++;
			}
			else
				break;
		}
		
		cout << s << endl;
	} 
}



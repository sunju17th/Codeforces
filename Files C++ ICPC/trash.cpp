#include<bits/stdc++.h>
using namespace std;
long long a[10000];
int main(){
	long long n, s=0;
	cin >> n;	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		s++;
		for(int j=0;j<i;j++)
		{
			if(a[i]==a[j])
			{
				s--;
				break;
			}
		}
	}
	cout << s;
	return 0;
}

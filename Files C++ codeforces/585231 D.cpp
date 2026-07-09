#include<iostream>

using namespace std;

long a[100005]; 

int main()
{
	int n, q;
	cin >> n >> q;
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	
	while(q--){
		long k, curlen=0, maxlen=0;
		cin >> k;
		for(int i=0;i<n;i++)
		{
			if(a[i]<=k)
			{
				curlen++;
				maxlen=max(curlen,maxlen);
			}	
			else 
			{
				curlen=0;
			}
		}
		
		cout << maxlen << endl;
	}
}



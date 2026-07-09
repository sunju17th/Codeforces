#include<iostream>
#include<fstream>

using namespace std;

long a[1000006];


int main()
{
	ifstream in("DIFF.INP");
	ofstream ou("DIFF.OUT");
		
	long n, maxre=-1e9+7;
	in >> n;
	for(long i=0;i<n;i++)
		in >> a[i];
	
	for(long j=0;j<n;j++)
		for(long i=j+1;i<n;i++)
			maxre=max(maxre,a[i]-a[j]);
	
	ou << maxre;
}



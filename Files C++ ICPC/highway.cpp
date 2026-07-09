#include<bits/stdc++.h>

using namespace std;

long absl(long n)
{
	if(n<0) return -n;
	return n;
}
long h[1000006] ;

int main()
{
 	ifstream inputFile("HIGHWAY.INP"); 
    ofstream outputFile("HIGHWAY.OUT");

	long mind=1e9+7;
    long n;
    
    inputFile >> n;
    for (long i = 0; i < n; i++) 
        inputFile >> h[i];
        
    sort(h,h+n);
        
    for(long i=0;i<n-1;i++)
    {
    	mind=min(mind,h[i+1]-h[i]);
	}
	
	outputFile << mind;

    
    return 0;
}



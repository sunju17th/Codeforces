#include<iostream>
#include<fstream>

using namespace std;

long long fi[1000006];

void fibo(int n)
{
	
	fi[1]=1;
	fi[2]=1;
	for(int i=3;i<=n;i++)
	{
		fi[i]=fi[i-1]+fi[i-2];
	}
}

bool snt(long n)
{
	if(n==1) return false;
	if(n==2) return true; 
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0) return false;
	}
	return true;
}


int main()
{	
	ifstream in("FIBO.INP");
	ofstream ou("FIBO.OUT");
	int n;
	
	in >> n;
	fibo(1000);
	for(int i=1;fi[i]<=n;i++)
	{
		if(snt(fi[i])==true) ou << fi[i] << " ";
	}
}



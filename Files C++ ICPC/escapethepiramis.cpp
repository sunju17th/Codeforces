#include<iostream>


using namespace std;

long long a[1000]={0},b[1000]={0};

void nhap(long long a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
}

int kt(long long a[], int i)
{
	long long the=a[i];
	while(so%2==0)
	{
		so=so/2;
	}
	while(so%3==0)
	{
		so=so/3;
	}
	while(so%5==0)
	{
		so=so/5;
	}
	while(so%7==0)
	{
		so=so/7;
	}
	if(so==1)
	{
		
	}
	else
	{
		return -1;
	}
	
}

int main()
{
	int n, i;
	cin >> n;
	
}

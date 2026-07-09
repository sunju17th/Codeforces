#include<iostream>

using namespace std;

bool kt(long i)
{
	int chan =0, le=0;
	while(i!=0)
	{
		int k = i%10;
		if(k%2==0)
			chan=chan+k;
		else le=le+k;
		i=i/10;
	}
	if(chan==le)
		return true;
	else return false;
}

int main()
{
	long int a, b, i=0;
	cin >> a;
	cin >> b; 
	for(a;a<=b;a++)
	{
		if(kt(a)==true)
		{
			i++;
		}
	}
	cout << i << endl;
	return 0;
}


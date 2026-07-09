#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{	
	int q;
	cin >> q;
	for(int i=0;i<q;i++)
	{
		string name="";
		long n;
		cin >> n;
		long so=1;
		while(n-pow(2,so)>0)
		{
			n-=pow(2,so);
			so++;
		}
		n--;
		for(long j=1;j<=so;j++)
		{
			if(n%2==0)
			{
				name ='4' + name;
			}
			else
			{
				name ='7'+name;
			}
			n=n/2;
		}
		cout << name << endl;
	}
	
	
}

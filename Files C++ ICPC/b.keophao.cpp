#include<iostream>

using namespace std;

int main()
{
	long a, b, v, s, time;
	int t;
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		s=0;
		time=0;
		cin >> a >> b >> v;
		while(s<v)
		{
			time=time+1;
			s=s+a;
			if(s>=v)
				break;
			s=s-b;
		}
		cout << time << endl;
	}
	return 0;
}

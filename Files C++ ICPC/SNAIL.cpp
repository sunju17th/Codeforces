#include<iostream>

using namespace std;

int main()
{
	long int a, b, v, s=0, i=0;
	cin >> a >> b >> v;
	while(s<v)
	{
		i++;
		s=s+a;
		if(s>=v){
			break;
		}
		s=s-b;
	}
	cout << i ;
	return 0;
}

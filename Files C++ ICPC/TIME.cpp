#include<iostream>

using namespace std;

int main()
{
	int h, p, s;
	cin >> h >> p >> s;
	s++;
	if(s==60)
	{
		p=p+1;
		s=0;
		if(p==60)
		{
			p=0;
			h=h+1;
			if(h==24)
			{
				h=0;
			}
		}
	}
	cout << h <<" "<< p <<" "<< s; 
	return 0;
}

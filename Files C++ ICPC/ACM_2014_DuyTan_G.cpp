#include<bits/stdc++.h>

using namespace std;

void swap(double &a, double &b, double &c)
{
	double temp = a;
	a = c;
	c = b;
	b = temp;
}

bool th2(double a1,double  a2,double a3,double b1,double b2,double b3,double c1,double c2,double c3)
{
	bool kt = false;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			for(int k=0;k<3;k++)
			{
				if(a3 == b3 &&  a3 == b3 && a1 + b1 == c1 && a2 == b2 && a2 + c2 == c1 && c1 == c3)
				{
					kt = true;
					break;
				}
				swap(c1, c2, c3);
			}
			swap(b1, b2, b3);
		}
		swap(a1, a2, a3);
	}
	return kt;
}



int main()
{
	long long n;
	cin >> n;
	while(n--)
	{
		double a1, a2, a3, b1, b2, b3, c1, c2, c3;
		
		cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3;
		
		bool kt = false;
		
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				for(int k=0;k<3;k++)
				{
					if(a1 == b1 && a2 == b2 && a1 == c1 && a2 == c2 && a3 + b3 + c3 == a1 && a1 == a2)
					{
						kt = true;
						break;
					}
					swap(c1, c2, c3);
				}
				swap(b1, b2, b3);
			}
			swap(a1, a2, a3);
		}
		
		if(!kt) kt=th2(a1, a2, a3, b1, b2, b3, c1, c2, c3);
		if(!kt) kt=th2(c1, c2, c3, b1, b2, b3, a1, a2, a3);
		if(!kt) kt=th2(a1, a2, a3, c1, c2, c3, b1, b2, b3);
		
		if(kt) cout << "TRUE" << endl;
		else cout <<"FALSE"<<endl;
	}
}



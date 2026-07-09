#include<iostream>

using namespace std;

int gcd(long long a, long long b)
{
    if (a == 0 || b == 0){
        return a + b;
    }
    while (a != b){
        if (a > b){
            a -= b;
        }else{
            b -= a;
        }
    }
    return a;
}

int main() 
{
	long long n, k, s;
	cin >> n >> k;
	long tong = 0;
	for(int i=1;i<=k;i++)
	{
		s=n*i;
		for(int j=1;j<=s;j++)
		{
			if(gcd(s,j)==1)
			{
 
				tong++;
			}
		}
	}
	cout << tong ;
	return 0;
}

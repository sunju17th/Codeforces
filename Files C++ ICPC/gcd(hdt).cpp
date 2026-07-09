#include<iostream>

using namespace std;

long long a, b;

class ucln
{
	public:
		long long gcd(long long a, long long b){
 	   	while (a*b != 0){ 
       	 	if (a > b){
            	a %= b; 
        	}else{
            	b %= a;
        	}
   	 	}
    	return a + b; 
	}
};

ucln x;

int main()
{
	cin >> a >> b;
	cout << x.gcd(a,b);
}



#include<iostream>

using namespace std;

long long mod = 13;

struct matran
{
	long long a, b, c, d;
	matran nhan(matran A, matran B)
	{
		matran C;
		C.a = (A.a*B.a + A.b*B.c) % mod;
	    C.b = (A.a*B.b + A.b*B.d) % mod;
	    C.c = (A.c*B.a + A.d*B.c) % mod;
	    C.d = (A.c*B.b + A.d*B.d) % mod;
	    return C;
	}
	
	
	matran luythua(matran A, long long x)
	{
	    matran res;
	    
	    res.a = res.d = 1;
	    res.b = res.c = 0;
	    
	    while (x > 0){
	        if(x % 2)
	            res = nhan(res, A);
	        A = nhan(A, A);
	        x >>= 1;
	    }
	    return res;
	}

};

int main()
{
	long long n;
	cin >> n;
	matran F;
	F.a = F.b = F.c = 1;
	F.d = 0;
	
	matran ans = F.luythua(F,n+2);
	long res = (ans.c-1)%13;
	cout << res;
}



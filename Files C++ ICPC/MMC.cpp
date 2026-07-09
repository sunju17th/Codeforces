#include<bits/stdc++.h>

using namespace std;


long long mod = 1000000007; 

long long mul(long long a, long long b) {

    long long t = (long long)a * b;
    return (long long)(t % mod);
}

struct Matrix
{
	long long mal[101][101];
	int n;
};

Matrix matMul(Matrix a, Matrix b)
{
	Matrix ans = {};
	int n = a.n;
	ans.n = n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            ans.mal[i][j] = 0;
            
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++)
			{
				ans.mal[i][j] = (ans.mal[i][j] + mul(a.mal[i][k], b.mal[k][j])) % mod;
			}
	return ans;
}

Matrix matPow(Matrix a, int k)
{
    Matrix res = {};
    int n=a.n;
    res.n = n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res.mal[i][j] = (i == j) ? 1 : 0;
        }
    }
    
    while (k) {
        if (k & 1) res = matMul(res, a);
        a = matMul(a, a);
        k >>= 1;
    }
    return res;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		Matrix a, b;
		a.n = b.n = n;
		
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)	
				cin >> a.mal[i][j];
		
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)	
				cin >> b.mal[i][j];
		
		Matrix ans = matPow(a, 3);
		
		bool kt=true;
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)	
				if(ans.mal[i][j]!=b.mal[i][j]) kt=false;
				
		if(kt == false) cout << "NO"<<endl;
		else cout << "YES"<<endl;
	}
}

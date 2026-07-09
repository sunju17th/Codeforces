#include<bits/stdc++.h>

using namespace std;


long long mod = 10; 

long long mul(long long a, long long b) {

    long long t = (long long)a * b;
    return (long long)(t % mod);
}

struct Matrix
{
	long long mal[100][100];
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
	Matrix a;
	int n, k;
    
	cin >> n >> k; 
    
	a.n = n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> a.mal[i][j];
            
	Matrix ans = matPow(a, k);
    

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << ans.mal[i][j]%10 << " "; 
		}
        cout << "\n";
	}
    
    return 0;
}

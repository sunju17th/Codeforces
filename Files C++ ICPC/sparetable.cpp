#include<iostream>
#include<math.h>

using namespace std;

long long arr[100005];
long long table[25][100005];

void pre_compute(int n, int k)
{
    for (int j = 1; j <= n; ++j)
        table[0][j] = arr[j];
		
    for (int i = 1; i <= k; ++i)
        for (int j = 1; j + (1 << i) - 1 <= n; ++j)
            table[i][j] = min(table[i - 1][j], table[i - 1][j + (1 << (i - 1))]);
}

int log2n(unsigned long long n) 
{
    return log2(n);
}

long long query(int l, int r)
{
    int i = log2n(r - l + 1); // int i = (int) log2((double) r - l + 1);
    return min(table[i][l], table[i][r - (1 << i) + 1]);
}

int main()	
{
	int n;
	cin >> n;
	cout << log2n(n);
}



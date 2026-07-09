#include<iostream>

using namespace std;

long long luyThuaNhiPhan(int a, int b)
{
	if(b==1) return a;
	if(b==0) return 1;
	if(b%2==0) return  luyThuaNhiPhan(a, b/2) * luyThuaNhiPhan(a, b/2);
	else return luyThuaNhiPhan(a, b/2) * luyThuaNhiPhan(a, b/2) * a;
 } 

int main()
{
	int a, b;
	cin >> a >> b;
	cout << luyThuaNhiPhan(a, b);
}


